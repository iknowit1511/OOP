#pragma once
#include <iostream>
#define PI 3.14
using namespace std;

class cHinhTron
{
private:
	float x; // tọa độ Ox
	float y; // tọa độ Oy
	float r; // bán kính
public:
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();
};

