#include "TroGiang.h"

TroGiang::TroGiang() : NhanVien()
{
	Somontrogiang = 0;
}
TroGiang::TroGiang(string ht, string ns, string ms, int Somontrogiang) : NhanVien(ht, ns, ms)
{
	this->Somontrogiang = Somontrogiang;
}
TroGiang::~TroGiang()
{

}
void TroGiang::input()
{
	NhanVien::input();
	cout << "nhap so mon tro giang: ";
	cin >> Somontrogiang;
	cin.ignore();
}
void TroGiang::print()
{
	NhanVien::print();
	cout << "So mon tro giang: " << Somontrogiang << endl;
}
double TroGiang::tinhluong()
{
	return (Somontrogiang * 0.3) * 18000;
}