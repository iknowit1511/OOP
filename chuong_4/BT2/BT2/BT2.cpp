#include <iostream>
#include "Array.h"


int main()
{
    int n;
    cout << "nhap so luong phan tu: ";
    cin >> n;
    Array A(n);
    cout << "Nhap cac phan tu: ";
    A.nhap();
    cout << "Danh sach cac phan tu\n";
    A.xuat();
    int x;
    cout << "\nNhap so x can kiem tra: ";
    cin >> x;
    cout << "So lan xuat hien cua x trong mang la " << A.dem_so_lan_x(x);
    cout << "\nKiem tra mang co tang dan hay khong?\n";
    if (A.kt_tang() == true) cout << "Mang tang dan\n";
    else cout << "Mang khong tang dan\n";
    A.so_le_min();
}

