#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

class sophuc {
private:
    float fThuc;
    float fAo;
public:
    sophuc(float fThuc = 1, float fAo = 1) {
        this->fThuc = fThuc;
        this->fAo = fAo;
    }
    sophuc(const sophuc& d) {
        fThuc = d.fThuc;
        fAo = d.fAo;
    }
    void nhap() {
        cin >> fThuc;
        cin >> fAo;
    }
    void xuat() {
        cout << roundf(fThuc * 100) / 100 << " ";
        cout << roundf(fAo * 100) / 100 << endl;
    }
    float Modun() {
        return (sqrt(fThuc * fThuc + fAo * fAo));
    }
    float pha() {
        return (atan2(fAo, fThuc));
    }
    void ncann(sophuc a, int n) {
        float modun = sqrt(fThuc * fThuc + fAo * fAo);
        float theta = atan2(fAo, fThuc);
        for (int k = 0; k < n; k++) {
            a.fThuc = pow(modun, 1.0 / n) * cos((theta + 2 * 3.14 * k) / n);
            a.fAo = pow(modun, 1.0 / n) * sin((theta + 2 * 3.14 * k) / n);
            a.xuat();
        }
    }
};

int main() {
    sophuc a, b;
    a.nhap();
    b = a;
    int n;
    cin >> n;
    b.ncann(a, n);
    return 0;
}
