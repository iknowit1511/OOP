#pragma once
#include "NhanVien.h"

class ChuyenVien : public NhanVien
{
private:
	vector<string> DuAngiaoduc;
	int Sonamlamviec;
public:
	ChuyenVien();
	ChuyenVien(string ht, string ns, string ms, int Sonam, vector<string> DuAn);
	~ChuyenVien();
	void input();
	void print();
	double tinhluong();
};

