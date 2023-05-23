
#include <iostream>
#include "cPhanSo.h"

void cPhanSo::Nhap() {
	cin >> iTuso;
	cin >> iMauso;
}
void cPhanSo::Xuat() {
	cout << iTuso << "/" << iMauso;
}
cPhanSo cPhanSo::Tong(cPhanSo b) {
	cPhanSo c;
	c.iTuso = this->iTuso * b.iMauso + b.iTuso * this->iMauso;
	c.iMauso = this->iMauso * b.iMauso;
	return c;
}
void cPhanSo::sosanh(cPhanSo b) {
	if ((float)this->iTuso / this->iMauso > (float)b.iTuso / b.iMauso) cout << "Phan So thu nhat lon hon";
	else if ((float)this->iTuso / this->iMauso < (float)b.iTuso / b.iMauso) cout << "Phan so thu hai lon hon";
	else cout << "Hai phan so bang nhau";
}
float cPhanSo::giatri() {
	return (float)iTuso / iMauso;
}
