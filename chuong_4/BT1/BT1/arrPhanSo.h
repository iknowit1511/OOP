#pragma once
#include "cPhanSo.h"
class arrPhanSo
{
private:
	int n; // số lượng phần tử
	cPhanSo* a;
public:
	arrPhanSo(int n = 0);
	void nhap();
	void xuat();
	cPhanSo PS_max();
	void sap_xep_tang();
};

