#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NhanVien
{
protected:
	string ht, ns, ms;
public:
	NhanVien();
	NhanVien(string hoten, string ngaysinh, string maso);
	virtual ~NhanVien();
	virtual void input();
	virtual void print();
	virtual double tinhluong() = 0;
};

