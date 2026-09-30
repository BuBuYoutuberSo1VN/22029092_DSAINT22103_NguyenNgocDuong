#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Cong lan luot cac phan tu vao tong
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << "Tong = " << sum;
    return 0;
}

// PHAN TICH DO PHUC TAP (n: so phan tu)
// Time: best / average / worst O(n), deu phai nhap va duyet het mang.
// Gia tri cac phan tu khong lam thay doi so lan lap.
// Memory phu: O(1) trong moi truong hop, chi dung them vai bien.
// Mang tinh a[100] trong code chiem O(1) bo nho cap phat (kich thuoc co dinh).
// Neu tong quat hoa mang co n phan tu: tong memory O(n).
