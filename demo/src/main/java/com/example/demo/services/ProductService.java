package com.example.demo.services;

import com.example.demo.entity.Product;
import com.example.demo.repository.IProductepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class ProductService {
    @Autowired
    private IProductepository productRepository;
    public List<Product> getAllProducts(){
        return productRepository.findAll();
    }
    public Product getProductId(Long id){
        return productRepository.findById(id).orElse(null);
    }
    public void addProduct(Product product){
        productRepository.save(product);
    }
    public void deleteProduct(Long id){
        productRepository.deleteById(id);
    }
    public void updateProduct(Product product){
        productRepository.save(product);
    }
    public List<Product> searchProducts(String keyword) {
        return productRepository.findByTitleContainingIgnoreCase(keyword);
    }
}
