#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class List {
private:
    double* n;
    int size;
public:
    List(int size = 0) {
        this->size = size;
        this->n = new double[size];
    }

    void them_phan_tu(double x) {
        double* m = new double[size];
        for (int i = 0; i < size; i++) {
            m[i] = n[i];
        }
        size++;
        n = new double[size];
        n[size - 1] = x;
        for (int i = 0; i < size - 1; i++) {
            n[i] = m[i];
        }
        delete[] m;
    }

    void xoa_x_dautien(double x) {
        if (size < 1) return;
        int i = 0;
        for (; i < size; i++) {
            if (n[i] == x) break;
        }
        if (i == size) return;
        for (; i < size - 1; i++) {
            n[i] = n[i + 1];
        }
        size--;
    }

    void xoa_all_x(double x) {
        if (size < 1) return;
        int dem = 0;
        for (int i = 0; i < size; i++) {
            if (n[i] == x)  dem++;
        }
        while (dem > 0) {
            xoa_x_dautien(x);
            dem--;
        }
    }

    void thay_gia_tri(int x, double y) {
        if (x >= 0 && x < size) {
            for (int i = 0; i < size; i++) {
                if (i == x) {
                    n[i] = y;
                    break;
                }
            }
        }
        return;
    }

    void xuat() {
        cout << "[";
        if (size > 0) {
            cout  << n[0];
            for (int i = 1; i < size; i++) {
                cout << "," << n[i];
            }
        }
        cout << "]";
    }
};



int main() {
    int a,y;
    List L(0);
    double x;
    while (1) {
        cin >> a;
            if (a == -1) {
                L.xuat();
                break;
            }
            else switch(a){
        case 0:
        {
            cin >> x;
            L.them_phan_tu(x);
        }
        break;
        case 1:
        {
            cin >> x;
            L.xoa_x_dautien(x);
        }
        break;
        case 2:
        {
            cin >> x;
            L.xoa_all_x(x);
        }
        break;
        case 3:
        {
            cin >> y >> x;
            L.thay_gia_tri(y, x);
        }
        break;
        }
    }
    return 0;
}
