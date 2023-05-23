#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 50

class life {
private:
    int n;
    int m;
    int a[MAX][MAX];
public:
    void nhap() {
        cin >> n;
        cin >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
    }
    void xuat() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    int dem_hang_xom(int k, int b) {
        int dem = 0;
        for (int i = k - 1; i <= k + 1; i++) {
            for (int j = b - 1; j <= b + 1; j++) {
                if (i >= 0 && j >= 0 && i < n && j < m && (i != k || j != b)) {
                    dem += a[i][j];
                }
            }
        }
        return dem;
    }

    void song() {
        int b[MAX][50] = {};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int hang_xom = dem_hang_xom(i, j);
                if (a[i][j] == 1 && (hang_xom < 2 || hang_xom > 3)) b[i][j] = 0;
                else if (a[i][j] == 0 && hang_xom == 3) b[i][j] = 1;
                else b[i][j] = a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = b[i][j];
            }
        }
    }
};



int main() {
    life H;
    H.nhap();
    int so_luot;
    cin >> so_luot;
    while (so_luot > 0) {
        H.song();
        so_luot--;
    }
    H.xuat();
    return 0;
}