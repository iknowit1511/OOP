#include <iostream>
#include "cDaThuc.h"


int main()
{
	int n;
	cout << "nhap bac cua da thuc A: ";
	cin >> n;
	cDaThuc A(n);
	cout << "nhap he so: ";
	A.nhap_DT();
	cout << "Da thuc A co dang: ";
	A.xuat_DT();
	int b;
	cout << "\nnhap bac cua da thuc B: ";
	cin >> b;
	cDaThuc B(b);
	cout << "nhap he so: ";
	B.nhap_DT();
	cout << "Da thuc B co dang: ";
	B.xuat_DT();
	cout << "\nTong 2 da thuc A va B la: ";
	A.cong(B).xuat_DT();
}

