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

// PHAN TICH DO PHUC TAP (n: so dong, m: so cot; n,m >= 1)
// tinhTong: best / average / worst Time O(n*m), duyet het n*m phan tu.
// xoaDong, voi k hop le: dich (n-k-1)*m phan tu.
// Time chi tiet: O(1 + (n-k-1)*(m+1)), tinh ca dieu khien vong lap.
// Best: xoa dong cuoi (k = n-1), O(1).
// Average: O(n*m) neu vi tri dong xoa phan bo deu, n >= 2.
// Worst: xoa dong dau (k = 0), O(n*m), n >= 2.
// Dong khong hop le: O(1), tra ve ngay.
// Nhap, tinh tong va xuat: ca chuong trinh O(n*m) trong moi truong hop.
// Memory phu: O(1) trong moi truong hop; khong tao ma tran moi.
// Mang tinh a[100][100] cap phat O(1) memory do kich thuoc co dinh.
// Neu tong quat hoa ma tran n*m: tong memory O(n*m).
