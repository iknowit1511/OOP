#include <iostream>
#include "cThuVien.h"

int main()
{
	int a, b;
	cout << "Nhap so luong sach giao khoa: ";
	cin >> a;
	cout << "Nhap so luong sach tham khao: ";
	cin >> b;
	cThuVien P(a, b);
	P.nhap();
	P.xuat();
	P.Tien_cho_tung_loai_sach();
	P.Thanh_tien_min();
	if (a == 0 && b == 0) cout << "Khong co sach de tim\n";
	else {
		string s;
		cout << "\nNhap thong tin nha xuat ban cua sach can tim: ";
		cin >> s;
		P.tim_thong_tin(s);
	}
}

