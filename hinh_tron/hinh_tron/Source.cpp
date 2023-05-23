#include <iostream>
#include "cHinhTron.h"
#include <iomanip>
using namespace std;

int main() {
	cHinhTron a;
	a.Nhap();
	a.Xuat();
	cout << "Chu vi: " << setprecision(2) << a.ChuVi() << endl << "Dien tich: " << a.DienTich();
	return 0;
}