#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class carray
{
private:
	int n;
	int* b = new int[n];
public:
	carray(int n);
	void xuat();
	int tim_so_am();
	int dem_so_lan(int k);
	void kt_giam_dan();
	void mang_tang();
	~carray();
};

