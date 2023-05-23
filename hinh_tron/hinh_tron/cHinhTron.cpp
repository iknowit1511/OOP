#include "cHinhTron.h"
#define PI 3.14
void cHinhTron::Nhap() {
	cout << "Nhap toa do tam I cua hinh tron: ";
	cin >> x >> y;
	cout << "Nhap vao ban kinh cua duong tron: ";
	cin >> r;
}
void cHinhTron::Xuat() {
	cout << "Toa do tam I cua hinh tron la (" << x << "," << y << ")\n";
	cout << "Ban kinh cua duong tron la: " << r;
	cout << endl;
}
float cHinhTron::ChuVi() {
	float cv = PI * 2 * r;
	return cv;
}
float cHinhTron::DienTich() {
	float dt = PI * PI * r;
	return dt;
}

