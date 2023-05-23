#pragma once
#include "NhanVien.h"

class NghienCuuVien : public NhanVien
{
private:
	vector<string> DuAnnghiencuu;
	int Sonamnghiencuu;
public:
	NghienCuuVien();
	~NghienCuuVien();
	NghienCuuVien(string ht, string ns, string ms, int sn, vector<string> da);
	void input();
	void print();
	double tinhluong();
};

