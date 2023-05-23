#pragma once
#include "NhanVien.h"

class TroGiang : public NhanVien
{
private:
	int Somontrogiang;
public:
	TroGiang();
	TroGiang(string ht,string ns,string ms,int somontrogiang);
	~TroGiang();
	void input();
	void print();
	double tinhluong();
};

