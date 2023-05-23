#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class cCanBo{
protected:
    int maCB;
    string name;
    bool gt;
    float don_gia;
public:
    virtual void Nhap(){
        cout << "Nhap ma Can Bo: ";
        cin >> maCB;
        cin.ignore();
        cout << "Nhap ten: ";
        getline(cin , name);
        cout << "Gioi tinh(1: nam, 0: nu): ";
        cin >> gt;
        cout << "Nhap don gia: ";
        cin >> don_gia;
    }
    virtual float Tinh_luong() = 0;
    virtual void Xuat(){
        cout << "Ma can bo: " << maCB << endl;
        cout << "Ho va ten: " << name << endl;
        cout << "Gioi tinh: ";
        if (gt == 1)
            cout << "nam" << endl;
        else if (gt == 0)
            cout << "nu" << endl;
        cout << "Luong: " << Tinh_luong() << endl;
    }
};

class cGiangVien : public cCanBo{
private:
    float so_gio_day;
    float so_gio_nc;
public:
    void Nhap(){
        cCanBo::Nhap();
        cout << "Nhap so gio day: ";
        cin >> so_gio_day;
        cout << "Nhap so gio nghien cuu: ";
        cin >> so_gio_nc;
    }
    float Tinh_luong(){
        return (so_gio_day + so_gio_nc) * don_gia;
    }
};

class cHanhchinh : public cCanBo{
private:
    int so_ngay_lm_viec;
    float tien_cong_1_ngay;
    int so_gio_lam_them;
public:
    void Nhap(){
        cCanBo::Nhap();
        cout << "Nhap so ngay lam viec: ";
        cin >> so_ngay_lm_viec;
        cout << "Nhap so gio lam them: ";
        cin >> so_gio_lam_them;
        cout << "Nhap so tien cong 1 ngay: ";
        cin >> tien_cong_1_ngay;
    }
    float Tinh_luong(){
        return (so_ngay_lm_viec * tien_cong_1_ngay) + (so_gio_lam_them * don_gia);
    }
};

int main(){
    cout << "Nhap so luong can bo: ";
    int n; cin >> n; 
    cCanBo** a = new cCanBo *[n];
    cout << setw(15) << "MENU\n";
    cout << "1. Giang vien dai hoc\n";
    cout << "2. Nhan vien Hanh chinh\n";
    for (int i = 0; i < n; i++){
        int loai; 
        cout << "Nhap 1 de nhap GV, 2 de nhap NV Hanh chinh: ";
        cin >> loai;
        switch(loai){
            case 1:
                a[i] = new cGiangVien;
                break;
            case 2:
                a[i] = new cHanhchinh;
                break;
        }
        a[i]->Nhap();
    }
    float tong_luong = 0;
    for (int i = 0; i < n; i++){
        tong_luong += a[i]->Tinh_luong();
        a[i]->Xuat();
    }
    cout << "\nTong luong truong dh phai tra la: " << tong_luong;
    return 0;
}