#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class cSV{
protected:
    int maSV;
    string name;
    string diachi;
    int tong_tc;
    float dtb;
public:
    cSV(){}
    virtual void Nhap(){
        cout << "Nhap Ma SV: "; cin >> maSV;
        cin.ignore();
        cout << "Nhap ho va ten: "; getline(cin, name);
        cout << "Nhap dia chi: "; getline(cin , diachi);
        cout << "Nhap tong tin chi la: "; cin >> tong_tc;
        cout << "Nhap diem trung binh: "; cin >> dtb;
    }
    virtual void Xuat(){
        cout << "\nMa SV: " << maSV << endl;
        cout << "Ho va ten: " << name << endl;
        cout << "Dia chi: " << diachi << endl;
        cout << "Tong tin chi la: " << tong_tc << endl;
        cout << "Diem trung binh: "<< dtb << endl;
    }
    virtual bool DK_TN(){
        return false;
    }
};

class cDH : public cSV{
private:
    float diem_thi_tn;
public:
    cDH() : cSV() {}
    void Nhap(){
        cout << "\nNhap vao thong tin cua SV he Dai hoc\n";
        cSV::Nhap();
        cout << "Nhap diem thi tot nghiep: "; cin >> diem_thi_tn;
    }
    bool DK_TN(){
        if (tong_tc >= 120 && dtb >= 5 && diem_thi_tn >= 5) return true;
        else return false;
    }
    void Xuat(){
        cSV::Xuat();
        cout << "Diem thi tot nghiep la: " << diem_thi_tn << endl;
        if (DK_TN() == true) cout << "SV tren du dieu kien tot nghiep\n";
    else cout << "SV tren khong du dieu kien tot nghiep\n";
    }
};

class cCD : public cSV{
private:
    string ten_LV;
    float diem_LV;
public:
    cCD() : cSV() {}
    void Nhap(){
        cout << "\nNhap vao thong tin cua Sinh vien he cao dang\n";
        cSV::Nhap();
        cin.ignore();
        cout << "Nhap ten luan van: "; getline(cin, ten_LV);
        cout << "Nhap diem luan van: "; cin >> diem_LV;
    }
    bool DK_TN(){
        if (tong_tc >= 170 && dtb >= 5 && diem_LV >= 5) return true;
        else return false;
    }
    void Xuat(){
        cSV::Xuat();
        cout << "Ten luan van la: " << ten_LV << endl;
        cout << "Diem luan van la: " << diem_LV << endl;
        if (DK_TN() == true) cout << "SV tren du dieu kien tot nghiep\n";
    else cout << "SV tren khong du dieu kien tot nghiep\n";
    }

};

int main(){
    cDH a;
    cCD b;
    a.Nhap();
    a.Xuat();
    b.Nhap();
    b.Xuat();
};