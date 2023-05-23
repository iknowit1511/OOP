#include "array.h"
carray::carray( int n) {
    this->n = n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        b[i] = (1 + rand() % (2000000));
    }
    cout << endl;
}
void carray::xuat() {
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}
int carray::tim_so_am() {
    int* a = b;
    int m;
    int flag = 0;
    int i = 0;
    for (; i < n; i++) {
        if (a[i] < 0) {
            m = a[i];
            flag = 1;;
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] < 0 && a[i] > m) {
            m = a[i];
        }
    }
    if (flag == 0) cout << "mang khong co so am";
    else if (flag == 1) return m;
    delete[] a;
}
int carray::dem_so_lan(int k) {
    int* a = b;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) dem++;
    }
    return dem;
    delete[] a;
}
void carray::kt_giam_dan() {
    int* a = b;
    int dem = 0;
    int i = 0;
    while (i < n - 1) {
        if (a[i] > a[i + 1]) {
            i++;
        }
    }
    if (i == n - 1) cout << "mang giam dan";
    else cout << "mang khong giam dan";
    delete[] b;
}
void carray::mang_tang() {
    int* a = b;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    delete[] a;
}
carray::~carray() {
    delete[] b;
}
