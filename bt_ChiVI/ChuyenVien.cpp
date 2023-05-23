#include "ChuyenVien.h"

ChuyenVien::ChuyenVien() : NhanVien()
{
	Sonamlamviec = 0;
	DuAngiaoduc.clear();
}
ChuyenVien::~ChuyenVien()
{

}
ChuyenVien::ChuyenVien(string ht, string ns, string ms, int Sonam, vector<string> DuAn) : NhanVien(ht, ns, ms)
{
	Sonamlamviec = Sonam;
	DuAngiaoduc = DuAn;
}
void ChuyenVien::input()
{
	NhanVien::input();
	int n;
	cout << "nhap so du an: ";
	cin >> n;
	cin.ignore();
	DuAngiaoduc.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap du an thu " << i + 1 << ": ";
		getline(cin, DuAngiaoduc[i]);
	}
	cout << "nhap so nam lam viec: ";
	cin >> Sonamlamviec;
	cin.ignore();
}
void ChuyenVien::print()
{
	NhanVien::print();
	cout << "Danh sach du an giao duc: ";
	for (int i = 0; i < DuAngiaoduc.size(); i++)
	{
		cout << DuAngiaoduc[i] << " ";
	}
	cout << "\nSo nam lam viec: " << Sonamlamviec << endl;
}
double ChuyenVien::tinhluong()
{
	int SoduanT=0;
	for (int i = 0; i < DuAngiaoduc.size(); i++)
	{
		if (DuAngiaoduc[i][0] == 'T') SoduanT++;
	}
	return (Sonamlamviec * 4 + SoduanT) * 18000;
}