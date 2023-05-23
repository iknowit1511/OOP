#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class cToaDo
{
private:
	float x;
	float y;
public:
	cToaDo(float x = 0 , float y = 0);
	void Nhap();
	float Khoangcach(cToaDo);
};

