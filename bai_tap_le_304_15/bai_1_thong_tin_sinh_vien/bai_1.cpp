#include <iostream>
#include "cSinhVien.h"
using namespace std;

int main()
{
	int a, b;
	cout << "So SV cao dang la: ";
	cin >> a;
	cout << "So SV dai hoc la: ";
	cin >> b;
	cSinhVien P(a, b);
	P.nhap();
	P.xuat();
	cout << "So sv tot nghiep la: " <<  P.SV_TN();
	cout << "\n";
	P.DTB_Max();
}

