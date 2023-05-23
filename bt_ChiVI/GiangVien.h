#pragma once
#include "NhanVien.h"

class GiangVien : public NhanVien
{
private:
	string hh, hv;
	int nam;
	vector<string> dsmonhoc;
	
public:
	GiangVien();
	~GiangVien();
	GiangVien(string ht, string ns, string ms ,string hh, string hv, int nam, vector<string> dsmonhoc );
	void input();
	void print();
	double tinhluong();
};

