#pragma once
#include "cSGK.h"
#include "cSTK.h"
class cThuVien
{
private:
	int n; // số lượng SGK
	cSGK* b;
	int m; // số lượng STK
	cSTK* c;
	float* arr;
public:
	cThuVien(int n = 1, int m = 1) {
		this->n = n;
		b = new cSGK[n];
		this->m = m;
		c = new cSTK[m];
		arr = new float[this->m + this->n];
	}
	void nhap() {
		int k = 0;
		if (n != 0) {
			cout << "Nhap vao sach giao khoa:\n";
			for (int i = 0; i < n; i++) {
				b[i].nhapSGK();
				arr[k++] = b[i].Thanh_tien();
			}
		}
		if (m != 0) {
			cout << "Nhap vao sach tham khao: \n";
			for (int i = 0; i < m; i++) {
				c[i].nhapSTK();
				arr[k++] = c[i].Thanh_tien();
			}
		}
	}
	void xuat() {
		if (n == 0 && m == 0) {
			cout << "Khong co cuon sach nao duoc nhap vao\n";
			return;
		}
		if (n != 0) {
			cout << "Cac cuon sach giao khoa: \n";
			for (int i = 0; i < n; i++) {
				b[i].xuatSGK();
			}
		}
		if (m != 0) {
			cout << "\nCac cuon sach tham khao: \n";
			for (int i = 0; i < m; i++) {
				c[i].xuatSTK();
			}
		}
	}
	void Tien_cho_tung_loai_sach() {
		if (n != 0) {
			float sum1 = 0;
			for (int i = 0; i < n; i++) {
				sum1 += b[i].Thanh_tien();
			}
			cout << "Thu vien phai tra cho viec mua SGK so tien la: " << sum1 << ".000 vnd";
		}
		else cout << "\nThu vien khong tra cho viec mua SGK";
		if (m != 0) {
			float sum2 = 0;
			for (int i = 0; i < m; i++) {
				sum2 += c[i].Thanh_tien();
			}
			cout << "\nThu vien phai tra cho viec mua STK so tien la: " << sum2 << ".000 vnd";
		}
		else cout << "\nThu vien khong tra cho viec mua STK";
	}
	void Thanh_tien_min() {
		if (n == 0 && m == 0) {
			cout << "\nKhong co thong tin cuon sach nao duoc nhap vao\n";
			return;
		}
		float min_x = arr[0];
		int dem = 0;

		for (int i = 1; i < m + n; i++) {
			if (arr[i] < min_x) {
				min_x = arr[i];
			}
		}

		cout << "\nNhung cuon sach co thanh tien thap nhat:\n";
		for (int i = 0; i < n; i++) {
			if (b[i].Thanh_tien() == min_x) {
				b[i].xuatSGK();
			}
		}
		for (int i = 0; i < m; i++) {
			if (c[i].Thanh_tien() == min_x) {
				c[i].xuatSTK();
			}
		}
	}
	void tim_thong_tin(string s) {
		int flag = 0;
		for (int i = 0; i < n; i++) {
			if (b[i].nhaxuatban == s) {
				cout << "Day la sach giao khoa cua nha xuat ban "<< s << "\n";
				b[i].xuatSGK();
				flag = 1;
			}
		}
		for (int i = 0; i < m; i++) {
			if (c[i].nhaxuatban == s) {
				cout << "Day la sach tham khao cua nha xuat ban " << s << "\n";
				c[i].xuatSTK();
				flag = 1;
			}
		}
		if (flag == 0) cout << "\nKhong co cuon sach nao nhu the trong thu vien";
	}
	~cThuVien() {
		delete[] b;
		delete[] c;
	}
};

