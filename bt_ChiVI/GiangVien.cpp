#include "GiangVien.h"

GiangVien::GiangVien() : NhanVien()
{
	hh = "";
	hv = "";
	nam = 0;
	dsmonhoc.clear();
}
GiangVien::GiangVien(string ht, string ns, string ms, string hh, string hv, int nam, vector<string> dsmonhoc) : NhanVien(ht, hh, hv)
{
	this->hh = hh;
	this->hv = hv;
	this->nam = nam;
	this->dsmonhoc = dsmonhoc;
}
GiangVien::~GiangVien()
{

}
void GiangVien::input()
{
	NhanVien::input();
	cout << "nhap hoc ham: ";
	getline(cin, hh);
	cout << "nhap hoc vi: ";
	getline(cin, hv);
	cout << "nhap nam giang day: ";
	cin >> nam;
	int n;
	cout << "nhap so mon giang day: ";
	cin >> n;
	cin.ignore();
	dsmonhoc.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap ten mon hoc thu " << i + 1 << ": ";
		getline(cin, dsmonhoc[i]);
	}
}
void GiangVien::print()
{
	NhanVien::print();
	cout << "hoc ham: " << hh << endl;
	cout << "hoc vi: " << hv << endl;
	cout << "nam giang day: " << nam << endl;
	cout << "mon giang day: ";
	for (int i = 0; i < dsmonhoc.size(); i++)
		cout << dsmonhoc[i] << " ";
	cout << endl;
}
double GiangVien::tinhluong()
{
	return (dsmonhoc.size() * nam * 0.12) * 20000;
}