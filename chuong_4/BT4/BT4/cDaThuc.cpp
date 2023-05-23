#include "cDaThuc.h"

cDaThuc::cDaThuc(int n) {
	this->n = n + 1;
	this->a = new int [this->n];
}
long cDaThuc::Tinh_da_thuc(int x) {
	long sum = 0;
	for (int i = n - 1; i >= 0; i--) {
		sum += a[i] * pow(x, i);
	}
	return sum;
}
void cDaThuc::nhap_DT() {
	for (int i = n - 1; i >= 0; i--) {
		cin >> a[i];
	}
}
void cDaThuc::xuat_DT() {
	for (int i = n - 1; i >= 1; i--) {
		cout << a[i] << "x" << i << " + ";
	}
	cout << a[0];
}
cDaThuc cDaThuc::cong(cDaThuc m) {
	cDaThuc temp;
	if (n > m.n) {
		temp.n = n;
	}
	else temp.n = m.n;
	cDaThuc k(temp.n - 1);
	for (int i = k.n - 1; i >= 0; i--) {
		if (i > n -1 ) {
			k.a[i] = m.a[i];
			continue;
		}
		if (i > m.n - 1) {
			k.a[i] = a[i];
			continue;
		} 
		k.a[i] = a[i] + m.a[i];
	}
	return k;
}
cDaThuc cDaThuc::tru(cDaThuc m) {
	cDaThuc temp;
	if (n > m.n) {
		temp.n = n;
	}
	else temp.n = m.n;
	cDaThuc k(temp.n - 1);
	for (int i = k.n - 1; i >= 0; i--) {
		if (i > n - 1) {
			k.a[i] = m.a[i];
			continue;
		}
		if (i > m.n - 1) {
			k.a[i] = a[i];
			continue;
		}
		k.a[i] = a[i] - m.a[i];
	}
	return k;
}
