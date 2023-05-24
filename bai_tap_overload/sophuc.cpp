#include <iostream>

using namespace std;

class SoPhuc{
private:
    float fThuc;
    float fAo;
public:
    SoPhuc(float fThuc = 1, float fAo = 0){
        this->fThuc = fThuc;
        this->fAo = fAo;
    }
    // constructor sao chép
    SoPhuc (const SoPhuc &d){
        fThuc = d.fThuc;
        fAo = d.fAo;
    }
    SoPhuc operator + (SoPhuc sp);
    SoPhuc operator - (SoPhuc sp);
    SoPhuc operator * (SoPhuc sp);
    SoPhuc operator / (SoPhuc sp);
    bool operator == (SoPhuc sp);
    friend istream& operator >> (istream &is, SoPhuc &sp);
    friend ostream& operator << (ostream &os, SoPhuc sp);
   
};

SoPhuc SoPhuc::operator + (SoPhuc sp){
    SoPhuc tam;
    tam.fThuc = fThuc + sp.fThuc;
    tam.fAo = fAo + sp.fAo;
    return tam;
}

SoPhuc SoPhuc::operator - (SoPhuc sp){
    SoPhuc tam;
    tam.fThuc = fThuc - sp.fThuc;
    tam.fAo = fAo - sp.fAo;
    return tam;
}

SoPhuc SoPhuc::operator * (SoPhuc sp){
    SoPhuc tam;
    tam.fThuc = fThuc * sp.fThuc - fAo * sp.fAo;
    tam.fAo = fThuc * sp.fAo + fAo * sp.fThuc;
    return tam;
}

SoPhuc SoPhuc::operator / (SoPhuc sp){
    SoPhuc tam;
    tam.fThuc = (fThuc * sp.fThuc + fAo * sp.fAo) / (sp.fThuc * sp.fThuc + sp.fAo * sp.fAo);
    tam.fAo = (fAo * sp.fThuc - fThuc * sp.fAo) / (sp.fThuc * sp.fThuc + sp.fAo * sp.fAo);
    return tam;
}

bool SoPhuc::operator == (SoPhuc sp){
    if ((fThuc == sp.fThuc) && (fAo == sp.fAo)) return true;
    return false;
}

istream& operator >> (istream &is, SoPhuc &sp){
    cout << "Nhap phan thuc: ";
    is >> sp.fThuc;
    cout << "Nhap phan ao: ";
    is >> sp.fAo;
    return is;
}

ostream& operator << (ostream &os, SoPhuc sp){
    os << sp.fThuc;
    if (sp.fAo > 0) os << " + ";
    os << sp.fAo << "i" << endl;
    return os;
}

int main(){
    SoPhuc sp1, sp2, spTong, spHieu, spTich, spThuong;
    cout << "Nhap so phuc 1: \n";
    cin >> sp1;
    cout << "Nhap so phuc 2: \n";
    cin >> sp2;
    spTong = sp1 + sp2;
    spHieu = sp1 - sp2;
    spTich = sp1 * sp2;
    spThuong = sp1 / sp2;
    if (sp1 == sp2){
        cout << "\nsp1 = sp2";
    }
    cout << "\nTong 2 so phuc: " << spTong;
    cout << "\nHieu 2 so phuc: " << spHieu;
    cout << "\nTich 2 so phuc: " << spTich;
    cout << "\nThuong 2 so phuc: " << spThuong;
}