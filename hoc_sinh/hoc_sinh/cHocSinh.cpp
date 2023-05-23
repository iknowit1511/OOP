#include "cHocSinh.h"
void cHocSinh::nhap() {
	cin.getline(hoten, 50);
	cin >> toan >> van;
}
void cHocSinh::xuat() {
	cout << "Ho va ten hoc sinh: " << hoten;
	cout << "\nDiem Toan: " << toan;
	cout << "\nDiem Van: " << van;
	cout << "\nDiem Trung binh: " << dtb;
	cout << endl;
}
void cHocSinh::Tinh_dtb() {
	dtb = (toan + van) / 2;
}
void cHocSinh::xeploai() {
	if (dtb < 5) cout << "HOC SINH YEU";
	if (dtb >= 5 && dtb < 6.5) cout << "HOC SINH TRUNG BINH";
	if (dtb >= 6.5 && dtb < 8) cout << "HOC SINH KHA";
	if (dtb >= 8 && dtb < 9) cout << "HOC SINH GIOI";
	if (dtb >= 9 && dtb <= 10) cout << "HOC SINH XUAT SAC";
}