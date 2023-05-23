#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class cDonThuc
{
private:
	int heso, somu; 
public:
	cDonThuc(int heso = 0, int somu = 0);
	void nhap();
	void set(int , int );
	void xuat();
	long tinh(int );
	void dao_ham();
	cDonThuc Tong(cDonThuc ); // tong cung bac
};


