#include "NhanVien.h"
#include "GiangVien.h"
#include "TroGiang.h"
#include "NghienCuuVien.h"
#include "ChuyenVien.h"

void NhapNhanVien(vector<NhanVien*> &nv)
{
	int n;
	cout << "nhap so nhan vien: ";
	cin >> n;
	nv.resize(n);
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "chon loai nhan su thu " << i+1 << ": " << endl;
		cout << "1-Giang Vien    2-Tro Giang    3-Nghien Cuu Vien    4-Chuyen Vien : ";
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
		case 1:
			nv[i] = new GiangVien();
			break;
		case 2:
			nv[i] = new TroGiang();
			break;
		case 3:
			nv[i] = new NghienCuuVien();
			break;
		case 4:
			nv[i] = new ChuyenVien();
			break;
		default:
			cout << "khong hop le!.Vui long nhap lai!" << endl;
			i--;
			continue;
		}
		nv[i]->input();
	}
}

void XuatNhanVien(vector<NhanVien*> nv)
{
	for (int i = 0; i < nv.size(); i++)
	{
		cout << "thong tin nhan vien thu " << i + 1 << ": " << endl;
		nv[i]->print();
		cout << "luong: " << nv[i]->tinhluong() << endl;
	}
}
double tongluong(vector<NhanVien*> nv)
{
	int tong = 0;
	for (int i = 0; i < nv.size(); i++)
	{
		tong += nv[i]->tinhluong();
	}
	return tong;
}
int main()
{
	vector<NhanVien*> nv;
	NhapNhanVien(nv);
	XuatNhanVien(nv);
	cout << "tong luong truong phai tra: " << tongluong(nv) << endl;
	return 0;
}