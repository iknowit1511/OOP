#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien() : NhanVien()
{
	DuAnnghiencuu.clear();
	Sonamnghiencuu = 0;
}
NghienCuuVien::~NghienCuuVien()
{

}
NghienCuuVien::NghienCuuVien(string ht, string ns, string ms, int sn, vector<string> da)
{
	Sonamnghiencuu = sn;
	DuAnnghiencuu = da;
}
void NghienCuuVien::input()
{
	NhanVien::input();
	int n;
	cout << "nhap so du an: ";
	cin >> n;
	cin.ignore();
	DuAnnghiencuu.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap du an thu " << i + 1 << ": ";
		getline(cin, DuAnnghiencuu[i]);
	}
	cout << "nhap so nam nghien cuu: ";
	cin >> Sonamnghiencuu;
	cin.ignore();
}
void NghienCuuVien::print()
{
	NhanVien::print();
	cout << "Danh sach du an nghien cuu: ";
	for (int i = 0; i < DuAnnghiencuu.size(); i++)
		cout << DuAnnghiencuu[i] << " ";
	cout << "\nSo nam nghien cuu: " << Sonamnghiencuu << endl;
}
double NghienCuuVien::tinhluong()
{
	int SoduanD = 0;
	for (int i = 0; i < DuAnnghiencuu.size(); i++)
	{
		if (DuAnnghiencuu[i][0] == 'D') SoduanD++;
	}
	return (Sonamnghiencuu * 2 + SoduanD) * 20000;
}