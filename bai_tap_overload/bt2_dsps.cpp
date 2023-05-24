#include <iostream>

using namespace std;

class PhanSo{
private:
    int iTuso;
    int iMauso;
public:
    PhanSo (int t = 0, int m = 1){
        iTuso = t;
        iMauso = m;
    }
    PhanSo (const PhanSo &d){
        iTuso = d.iTuso;
        iMauso = d.iMauso;
    }
    int LayTu(){
        return iTuso;
    }
    int LayMau(){
        return iMauso;
    }
    void GanTu(int t){
        this->iTuso = t;
    }
    void GanMau(int m){
        this->iMauso = m;
    }
    friend istream& operator >> (istream &is, PhanSo &ps);
    friend ostream& operator << (ostream &os, PhanSo ps);
    bool operator > (PhanSo ps);
    PhanSo operator + (PhanSo ps);
    PhanSo operator - (PhanSo ps);
};

istream& operator >> (istream &is, PhanSo &ps){
    is >> ps.iTuso >> ps.iMauso;
    while (!ps.iMauso){
        cout << "Nhap lai mau so: ";
        is >> ps.iMauso;
    }
    return is;
}

ostream& operator << (ostream &os, PhanSo ps){
    os << ps.iTuso;
    if (ps.iTuso != 0 && ps.iMauso != 1)
        os << "/" << ps.iMauso;
    return os;
}

bool PhanSo::operator>(PhanSo ps){
    if (1.0 * iTuso / iMauso > 1.0 * ps.iTuso / ps.iMauso) return true;
    return false;
}

PhanSo PhanSo::operator+(PhanSo ps){
    return PhanSo(iTuso * ps.iMauso + ps.iTuso * iMauso, iMauso * ps.iMauso);
}

PhanSo PhanSo::operator-(PhanSo ps){
    return PhanSo(iTuso * ps.iMauso - ps.iTuso * iMauso, iMauso * ps.iMauso);
}

class DSPhanSo{
private:
    PhanSo *a;
    int n; // số lượng phần tử trong mảng
public:
    void Nhap(){
        cin >> n;
        a = new PhanSo[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
    }
    PhanSo TimPS_Max(){
        PhanSo b = a[0];
        for (int i = 1; i < n; i++){
            if (a[i] > b) b = a[i];
        }
        return b;
    }
    PhanSo TinhTong(){
        PhanSo sum;
        for (int i = 0; i < n; i++){
            sum = sum + a[i];
        }
        return sum;
    }
};

int main(){
    DSPhanSo a;
    a.Nhap();
    cout << a.TimPS_Max() << endl;
    cout << a.TinhTong();
}