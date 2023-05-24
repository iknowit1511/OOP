#include <iostream>

using namespace std;

class cDate{
private:
    int iNgay;
    int iThang;
    int iNam;
public:
    cDate(){iNgay = 1; iThang = 1; iNam = 1;}
    cDate(int x, int y, int z){iNgay = x; iThang = y; iNam = z;}
    cDate(const cDate &D){iNgay = D.iNgay; iThang = D.iThang; iNam = D.iNam;}
    friend istream& operator >> (istream &is, cDate &D);
    friend ostream& operator << (ostream &os, cDate D);
    cDate operator ++();
    cDate operator --();
    cDate operator ++(int);
    cDate operator + (int n);
    cDate operator - (int n);
    int MaxDay(int M, int Y);
};

istream& operator >> (istream &is, cDate &D){
    cout << "Nhap ngay: "; is >> D.iNgay;
    cout << "Nhap thang: " ; is >> D.iThang;
    cout << "Nhap nam: "; is >> D.iNam;
    return is;
}

ostream& operator << (ostream &os, cDate D){
    os << D.iNgay << "/" << D.iThang << "/" << D.iNam << endl;
    return os;
}

int cDate::MaxDay(int M, int Y){
    if ((M == 1) || (M == 3) || (M == 5) || (M == 7) || (M == 8) || (M == 10) || (M == 12)) return 31;
    if (M == 2){
        if (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0))
            return 29;
        else return 28;
    }
    return 30;
}
cDate cDate::operator++(){
    iNgay++;
    if (iNgay > MaxDay(iThang , iNam)){
        iNgay == 1;
        iThang++;
        if(iThang > 12){
            iNam++;
            iThang == 1;
        }
    }
    return (*this);
}

cDate cDate::operator--(){
    iNgay--;
    if (iNgay == 0){
        if (iThang - 1 == 0){
            iNam--;
            iThang = 12;
            iNgay = 31;
        }
        else {
            iThang--;
            iNgay = MaxDay(iThang, iNam);
        }
    }
    return (*this);
}

cDate cDate::operator++(int){
    cDate tmp = *this;
    *this = ++*this;
    return tmp;
}

cDate cDate::operator+(int n){
    cDate tmp = *this;
    for (int i = 0; i < n; i++){
        ++tmp;
    }
    return tmp;
}

cDate cDate::operator-(int n){
    cDate tmp = *this;
    for (int i = 0; i < n; i++){
        --tmp;
    }
    return tmp;
}

int main(){
    cDate D;
    cin >> D;
    cout << D;
    cDate D1(D), D2(D), D3(D), D4(D), D5(D);
    cout << ++D1;
    cout << D2++;
    cout << --D3;
    cout << D4 + 5;
    cout << D5 - 7;
    return 0;
}