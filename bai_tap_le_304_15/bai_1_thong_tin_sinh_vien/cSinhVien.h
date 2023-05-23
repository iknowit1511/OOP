#pragma once
#include "cCaoDang.h"
#include "cDaiHoc.h"
class cSinhVien
{
private:
	int n; // số lượng sinh viên cao đẳng
	cCaoDang* b;
	int m; // số lượng sinh viên đại học
	cDaiHoc* c;
	float* arr;
public:
	cSinhVien(int n = 1, int m = 1) {
		this->n = n;
		b = new cCaoDang[n];
		this->m = m;
		c = new cDaiHoc[m];
		arr = new float[m + n];
	}
	void nhap() {
		int k = 0;
		if (n != 0) {
			cout << "nhap sv cao dang: \n";
			for (int i = 0; i < n; i++) {
				b[i].nhapCD();
				arr[k++] = b[i].DTB;
			}
		}
		if (m != 0) {
			cout << "nhap sv dai hoc: \n";
			for (int i = 0; i < m; i++) {
				c[i].nhapDH();
				arr[k++] = c[i].DTB;
			}
		}
	}
	void xuat() {
		if (n == 0 && m == 0) {
			cout << "Khong co sinh vien nao duoc nhap vao\n";
			return;
		}
		if (n != 0) {
			cout << "Cac sinh vien cao dang: \n";
			for (int i = 0; i < n; i++) {
				b[i].xuatCD();
			}
		}
		if (m != 0) {
			cout << "\nCac sinh vien dai hoc: \n";
			for (int i = 0; i < m; i++) {
				c[i].xuatDH();
			}
		}
	}
	int SV_TN() {
		int dem = 0;
		for (int i = 0; i < n; i++) {
			if (b[i].DK_TNCD()) dem++;
		}
		for (int i = 0; i < m; i++) {
			if (c[i].DK_TNDH()) dem++;
		}
		return dem;
	}
	void DTB_Max() {
		if (n == 0 && m == 0) {
			cout << "Khong co thong tin sinh vien nao duoc nhap vao\n";
			return;
		}
		float max_diem = arr[0];
		int k = 0;
		for (int i = 1; i < m + n; i++) {
			if (arr[i] > max_diem) {
				max_diem = arr[i];
				k = i;
			}
		}
		cout << "Sinh vien co diem trung binh cao nhat la: ";
		if (k <= n - 1) {
			cout << b[k].hoten;
		}
		else {
			cout << c[k-n].hoten;
		}
	}
	~cSinhVien() {
		delete [] b;
		delete [] c;
	}
};

