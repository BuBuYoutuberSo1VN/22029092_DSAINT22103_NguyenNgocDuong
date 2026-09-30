#include <iostream>
using namespace std;

void xoa(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        return;
    }
    // Dich cac phan tu phia sau sang trai
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void chen(int a[], int &n, int m, int y) {
    if (m < 0 || m > n || n >= 100) {
        return;
    }
    // Dich tu cuoi ve dau de tranh ghi de du lieu
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++;
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    xoa(a, n, k);
    cout << "Sau khi xoa: ";
    xuat(a, n);
    int m, y;
    cin >> m >> y;
    chen(a, n, m, y);
    cout << "\nSau khi chen: ";
    xuat(a, n);
    return 0;
}
