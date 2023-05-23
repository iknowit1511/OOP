#pragma once
#include <iostream>
#include <string>
using namespace std;

class cSTK
{
private:
	int maSach;
	string tensach;
	string nhaxuatban;
	int soluong;
	float don_gia; // đơn vị nghìn
	float tien_thue;
public:
	friend class cThuVien;
	cSTK(int maSach = 0, string tensach = "A", string nhaxuatban = "NXB Tre", int soluong = 0, float don_gia = 0, float tien_thue = 0)
		:maSach(maSach), tensach(tensach), nhaxuatban(nhaxuatban), soluong(soluong), don_gia(don_gia), tien_thue(tien_thue) {};
	void nhapSTK() {
		cout << "Ma Sach: ";
		cin >> maSach;
		cin.ignore();
		cout << "Ten sach: ";
		getline(cin, tensach);
		cout << "Nha xuat ban: ";
		getline(cin, nhaxuatban);
		cout << "So luong sach: ";
		cin >> soluong;
		cout << "Don gia (don vi nghin vnd): ";
		cin >> don_gia;
		cout << "Tinh thue (don vi nghin vnd): ";
		cin >> tien_thue;
		cout << "\n";
	}
	void xuatSTK() {
		cout << "Ma Sach: " << maSach;
		cout << "\nTen cuon sach: " << tensach;
		cout << "\nNha xuat ban: " << nhaxuatban;
		cout << "\nSo luong: " << soluong;
		cout << "\nDon gia: " << don_gia;
		cout << "\nTien thue: " << tien_thue;
		cout << endl << endl;
	}
	float Thanh_tien() {
		float tien;
		tien = don_gia * soluong + tien_thue;
		return tien;
	}
};

