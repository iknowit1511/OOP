#include "arrPhanSo.h"

arrPhanSo::arrPhanSo(int n) {
	this->n = n;
	this->a = new cPhanSo[n];
}

void arrPhanSo::nhap() {
	for (int i = 0; i < n; i++) {
		a[i].Nhap();
	}
}
void arrPhanSo::xuat() {
	for (int i = 0; i < n; i++) {
		a[i].Xuat();
		cout << endl;
	}
}
cPhanSo arrPhanSo::PS_max() {
	cPhanSo temp = a[0];
	float m = a[0].giatri();
	for (int i = 1; i < n; i++) {
		if (a[i].giatri() > m) {
			m = a[i].giatri();
			temp = a[i];
		}
	}
	return temp;
}
void arrPhanSo::sap_xep_tang() {
	for (int i = 1; i < n; i++) {
		cPhanSo temp = a[i];
		float x = a[i].giatri();
		for (int j = i - 1; j >= 0 && a[j].giatri() > x; j--) {
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}
}