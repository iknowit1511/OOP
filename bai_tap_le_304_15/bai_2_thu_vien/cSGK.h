#pragma once
#include <iostream>
#include <string>
using namespace std;

class cSGK
{
private:
	int maSach;
	string tensach;
	string nhaxuatban;
	int soluong;
	float don_gia; // đơn vị nghìn
	bool tinh_trang;
public:
	friend class cThuVien;
	cSGK(int maSach = 0, string tensach = "A", string nhaxuatban = "NXB Tre", int soluong = 0, float don_gia = 0, bool tinh_trang = 0)
		:maSach(maSach), tensach(tensach), nhaxuatban(nhaxuatban), soluong(soluong), don_gia(don_gia), tinh_trang(tinh_trang) {};
	void nhapSGK() {
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
		cout << "Tinh trang cuon sach (0: cu, 1: moi): ";
		cin >> tinh_trang;
		cout << "\n";
	}
	void xuatSGK() {
		cout << "Ma Sach: " << maSach;
		cout << "\nTen cuon sach: " << tensach;
		cout << "\nNha xuat ban: " << nhaxuatban;
		cout << "\nSo luong: " << soluong;
		cout << "\nDon gia: " << don_gia;
		cout << "\nTinh trang sach: ";
		if (tinh_trang) cout << "Sach moi"; else cout << "Sach cu";
		cout << endl << endl;
	}
	float Thanh_tien() {
		if (tinh_trang)
			return (float)soluong * don_gia;
		else return (float)soluong * don_gia * 0.5;
	}
};




