package com.example.demo.controller;

import com.example.demo.entity.Product;
import com.example.demo.services.ProductService;
import jakarta.validation.Valid;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.io.ClassPathResource;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.util.FileCopyUtils;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;
import java.util.List;
import java.util.UUID;

@Controller
@RequestMapping("/products")
public class ProductController {
    @Autowired
    private ProductService productService;
    @GetMapping
    public String showAllProducts(Model model){
        List<Product> products = productService.getAllProducts();
        model.addAttribute("products", products);
        return "product/list";
    }
    @PostMapping("/search")
    public String searchProducts(@RequestParam("keyword") String keyword, Model model) {
        List<Product> searchResult = productService.searchProducts(keyword);
        model.addAttribute("products", searchResult);
        return "product/list";
    }
    @GetMapping("/add")
    public String addProductForm(Model model){
        model.addAttribute("product", new Product());
        return "product/add";
    }
    @PostMapping("/add")
    public String addProduct(@Valid @ModelAttribute("product") Product product, @RequestParam MultipartFile imageProduct, BindingResult result, Model model) {
        if (result.hasErrors()) {
            model.addAttribute("product", product);
            return "product/add";
        }

        if (imageProduct != null && imageProduct.getSize() > 0) {
            try {
                File saveFile = new ClassPathResource("static/images").getFile();
                String newImageFile = UUID.randomUUID() + ".png";
                java.nio.file.Path path =  Paths.get(saveFile.getAbsolutePath() + File.separator + newImageFile);
                Files.copy(imageProduct.getInputStream(), path, StandardCopyOption.REPLACE_EXISTING);

                product.setImage(newImageFile);

            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        productService.addProduct(product);
        return "redirect:/products";
    }

    @GetMapping("/delete/{id}")
    public String deleteProduct(@PathVariable("id") Long id){
        productService.deleteProduct(id);
        return "redirect:/products";
    }
    @GetMapping("edit/{id}")
    public String editProductForm(@PathVariable("id")Long id, Model model){
        Product editbook = productService.getProductId(id);
        if (editbook != null ){
            model.addAttribute("product",editbook);
            return "product/edit";
        }else {
            return "redirect:/products";
        }
    }

    @PostMapping("edit/{id}")
    public String editProduct(@PathVariable("id")Long id, @ModelAttribute("product") @Valid Product editProduct,@RequestParam MultipartFile imageProduct ,BindingResult result, Model model){
        if (result.hasErrors()){
            model.addAttribute("product",editProduct);
            return "product/edit";
        }else {
            Product existingProduct = productService.getProductId(id);
            if ( existingProduct != null){
                existingProduct.setTitle(editProduct.getTitle());
                existingProduct.setPrice(editProduct.getPrice());
                if(imageProduct !=null && imageProduct.getSize()>0)
                {
                    try{
                        File saveFile  = new ClassPathResource("static/images").getFile();
                        String newImageFile = UUID.randomUUID() + ".png";
                        Path path = Paths.get(saveFile.getAbsolutePath()+File.separator+newImageFile);
                        Files.copy(imageProduct.getInputStream(),path, StandardCopyOption.REPLACE_EXISTING);
                        existingProduct.setImage(newImageFile);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
                productService.updateProduct(existingProduct);
            }
            return "redirect:/products";
        }
    }

}
