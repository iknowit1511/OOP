#include <iostream>
#include "arrPhanSo.h";

int main()
{
    int k;
    cout << "Nhap so luong phan tu: ";
    cin >> k;
    arrPhanSo PS(k);
    cout << "Nhap cac phan so\n";
    PS.nhap();
    cout << "Danh sach cac phan so:\n";
    PS.xuat();
    cout << "Phan so lon nhat trong mang PS:\n";
    cPhanSo p = PS.PS_max();
    p.Xuat();
    cout << "\nCac phan so sap xep theo thu tu tang dan:\n";
    PS.sap_xep_tang();
    PS.xuat();
}

