#include "Array.h"

Array::Array(int n) {
	this->n = n;
	a = new int[n];
}
void Array::nhap() {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void Array::xuat() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int Array::dem_so_lan_x(int x) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) dem++;
	}
	return dem;
}
bool Array::kt_tang() {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i+1]) return false;
	}
	return true;
}
void Array::so_le_min() { // không có số lẻ hoặc có 
	int i = 0;
	int m = 0;
	int vi_tri = 0;
	for (; i < n; i++) {
		if (a[i] % 2 != 0) {
			m = a[i];
			vi_tri = i;
			break;
		}
	}
	if (i == n) cout << "Mang khong co so le";
	else {
		for (int j = vi_tri+1; j < n; j++) {
			if (a[j] % 2 != 0 && a[j] < m) {
				m = a[j];
			}
		}
		cout << "So le nho nhat trong mang la: " << m;
	}
}