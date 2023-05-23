#include <iostream>
#include "cDonThuc.h"

int main()
{
    cDonThuc M,N;
    cout << "Nhap don thuc 1: ";
    M.nhap();
    cout << "\nNhap don thuc 2: ";
    N.nhap();
    cout << "\nTong hai don thuc (neu co) la: ";
    cDonThuc c = M.Tong(N);
    c.xuat();
}

