#pragma once
#include <iostream>
#include <string>
using namespace std;
class cCaoDang
{
private:
	int maSV;
	string hoten;
	string diachi;
	int tong_tinchi;
	float DTB;
	float DiemThiTotNghiep;
public:
	friend class cSinhVien;
	cCaoDang(int maSV = 0, string hoten = "Nguyen Van A", string diachi = "TP.HCM", int tong_tinchi = 0, float DTB = 0, float DiemThiTotNghiep = 0)
		:maSV(maSV), hoten(hoten), diachi(diachi), tong_tinchi(tong_tinchi), DTB(DTB), DiemThiTotNghiep(DiemThiTotNghiep){};
	void nhapCD() {
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
		cout << "Diem thi tot nghiep: ";
		cin >> DiemThiTotNghiep;
		cout << "\n";
	}
	void xuatCD() {
		cout << "Ma Sinh Vien: " << maSV;
		cout << "\nHo van ten: " << hoten;
		cout << "\nDia chi: " << diachi;
		cout << "\nTong tin chi: " << tong_tinchi;
		cout << "\nDiem trung binh: " << DTB;
		cout << "\nDiem thi tot nghiep: " << DiemThiTotNghiep;
		cout << endl << endl;
	}
	bool DK_TNCD() {
		if (tong_tinchi >= 120 && DTB >= 5 && DiemThiTotNghiep >= 5) return true;
		else return false;
	}
};

