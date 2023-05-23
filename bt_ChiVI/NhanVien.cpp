#include "NhanVien.h"

NhanVien::NhanVien()
{
	ht = "";
	ns = "";
	ms = "";
}
NhanVien::NhanVien(string ht, string ns, string ms)
{
	this->ht = ht;
	this->ns = ns;
	this->ms = ms;
}
NhanVien::~NhanVien()
{

}
void NhanVien::input()
{
	cout << "nhap ho va ten: ";
	getline(cin, ht);
	cout << "nhap ngay thang nam sinh (dd/mm/yyyy) : ";
	getline(cin, ns);
	cout << "nhap ma so: ";
	getline(cin, ms);
}
void NhanVien::print()
{
	cout << "ho va ten: " << ht << endl;
	cout << "ngay thang nam sinh: " << ns << endl;
	cout << "ma so nhan vien: " << ms << endl;
}