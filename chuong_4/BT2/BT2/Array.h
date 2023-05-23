#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int n; // số lượng phần tử
	int* a;
public:
	Array(int n = 0);
	void nhap();
	void xuat();
	int dem_so_lan_x(int x);
	bool kt_tang();
	void so_le_min();
};

