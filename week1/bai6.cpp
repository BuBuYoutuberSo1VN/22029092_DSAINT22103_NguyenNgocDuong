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

// PHAN TICH DO PHUC TAP (chi so bat dau tu 0)
// Ham xoa, voi k hop le: dich n-k-1 phan tu; Time O(n-k).
// Best: xoa cuoi (k = n-1), O(1).
// Average: O(n) neu moi vi tri xoa co xac suat nhu nhau.
// Worst: xoa dau (k = 0), O(n).
// Ham chen, voi m hop le va mang con cho: dich n-m phan tu; Time O(n-m+1).
// Best: chen cuoi (m = n), O(1).
// Average: O(n) neu moi vi tri chen co xac suat nhu nhau.
// Worst: chen dau (m = 0), O(n).
// Vi tri khong hop le hoac mang day khi chen: O(1), tra ve ngay.
// Nhap/xuat va ca chuong trinh: O(n) trong moi truong hop.
// Memory phu: O(1) trong moi truong hop, chi dung them vai bien.
// Mang tinh a[100] trong code chiem O(1) bo nho cap phat (kich thuoc co dinh).
// Neu tong quat hoa mang co n phan tu: tong memory O(n).
