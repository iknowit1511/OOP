package com.example.demo.repository;

import com.example.demo.entity.Product;
import org.springframework.stereotype.Repository;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

@Repository
public interface IProductepository extends JpaRepository<Product,Long> {
    List<Product> findByTitleContainingIgnoreCase(String keyword);
}
