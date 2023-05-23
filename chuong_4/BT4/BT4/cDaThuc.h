#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class cDaThuc
{
private:
	int n; // bậc của đa thức
	int* a;
public:
	cDaThuc(int n = 0);
	long Tinh_da_thuc(int );
	void nhap_DT();
	void xuat_DT();
	cDaThuc cong(cDaThuc);
	cDaThuc tru(cDaThuc);
};

