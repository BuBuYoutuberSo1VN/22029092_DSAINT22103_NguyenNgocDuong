#include <iostream>
using namespace std;

int tinhTong(int a[][100], int n, int m) {
    int sum = 0;
    // Duyet toan bo cac phan tu cua ma tran
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

void xoaDong(int a[][100], int &n, int m, int k) {
    if (k < 0 || k >= n) {
        return;
    }
    // Dich cac dong phia duoi len tren
    for (int i = k; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    n--;
}

void xuatMang(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    int a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Tong = " << tinhTong(a, n, m) << endl;
    int k;
    cin >> k;
    xoaDong(a, n, m, k);
    cout << "Mang sau khi xoa dong:\n";
    xuatMang(a, n, m);
    return 0;
}
