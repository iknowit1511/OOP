#include "cDonThuc.h"

cDonThuc::cDonThuc(int heso, int somu) {
	this->heso = heso;
	this->somu = somu;
}
void cDonThuc::nhap() {
	cin >> heso >> somu;
}
void cDonThuc::set(int heso, int somu) {
	cin >> heso >> somu;
	this->heso = heso;
	this->somu = somu;
}
void cDonThuc::xuat() {
	if (heso == 0) {
		cout << "0"; 
	}
	else if (somu == 0) {
		cout << heso;
	}
	else if (somu == 1) {
		cout << heso << "x";
	}
	else {
		cout << heso << "x^" << somu;
	}
}
long cDonThuc::tinh(int x) {
	return heso * pow(x, somu);
}
void cDonThuc::dao_ham() {
	if (heso == 0) cout << "0";
	else if (somu == 0) cout << "0";
	else if (somu == 1) cout << heso;
	else if (somu == 2) cout << heso << "x";
	else cout << somu * heso << "x^" << somu - 1;
}

cDonThuc cDonThuc::Tong(cDonThuc p) {
	if (somu == p.somu) {
		cDonThuc temp;
		temp.heso = heso + p.heso;
		temp.somu = somu;
		return temp;
	}
	else {
		cout << "Khong tinh duoc vi hai don thuc khong cung bac";
	}
}