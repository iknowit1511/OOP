#pragma once
#include <iostream>
#include <string>
using namespace std;
class cDaiHoc
{
private:
	int maSV;
	string hoten;
	string diachi;
	int tong_tinchi;
	float DTB;
	string tenLuanVan;
	float diemLuanVan;
public:
	friend class cSinhVien;
	cDaiHoc(int maSV = 0, string hoten = "Nguyen Van A", string diachi = "TP.HCM", int tong_tinchi = 0, float DTB = 0, string tenLuanVan = "A", float diemLuanVan = 0)
		:maSV(maSV), hoten(hoten), diachi(diachi), tong_tinchi(tong_tinchi), DTB(DTB), tenLuanVan(tenLuanVan), diemLuanVan(diemLuanVan) {};
	void nhapDH() {
		cout << "Ma SV: ";
		cin >> maSV;
		cin.ignore();
		cout << "Ho va ten: ";
		getline(cin, hoten);
		cout << "Dia chi: ";
		getline(cin, diachi);
		cout << "Tong tin chi: ";
		cin >> tong_tinchi;
		cout << "Diem trung binh: ";
		cin >> DTB;
		cin.ignore();
		cout << "Ten luan van: ";
		getline(cin, tenLuanVan);
		cout << "Diem luan van: ";
		cin >> diemLuanVan;
		cout << endl;
	}
	void xuatDH() {
		cout << "Ma Sinh Vien: " << maSV;
		cout << "\nHo van ten: " << hoten;
		cout << "\nDia chi: " << diachi;
		cout << "\nTong tin chi: " << tong_tinchi;
		cout << "\nDiem trung binh: " << DTB;
		cout << "\nTen Luan Van: " << tenLuanVan;
		cout << "\nDiem Luan Van: " << diemLuanVan;
		cout << endl << endl;
	}
	bool DK_TNDH() {
		if (tong_tinchi >= 150 && DTB >= 5 && diemLuanVan >= 5) return true;
		else return false;
	}
};

