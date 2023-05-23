#pragma once
#include <iostream>
#include <string>
using namespace std;
class cHocSinh
{
private:
	char hoten[51];
	float toan, van, dtb;
public:
	void nhap();
	void xuat();
	void Tinh_dtb();
	void xeploai();
};

