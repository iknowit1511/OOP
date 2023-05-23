#pragma once
#include <iostream>
using namespace std;
class cPhanSo
{
private:
	int iTuso;
	int iMauso;
public:
	void Nhap();
	void Xuat();
	cPhanSo Tong(cPhanSo);
	void sosanh(cPhanSo);
	float giatri();
};

