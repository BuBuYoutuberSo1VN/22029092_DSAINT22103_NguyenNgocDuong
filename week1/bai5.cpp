#include <iostream>
using namespace std;

int main() {
    int n;
    double a[100];
    double sum = 0;
    cin >> n;
    // Vua nhap mang vua tinh tong
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double trungBinh = sum / n;
    // In cac phan tu lon hon hoac bang trung binh
    for (int i = 0; i < n; i++) {
        if (a[i] >= trungBinh) {
            cout << a[i] << " ";
        }
    }
    return 0;
}

// PHAN TICH DO PHUC TAP (1 <= n <= 100)
// Best / average / worst Time: O(n), deu phai tinh tong va kiem tra n phan tu.
// In it hay nhieu phan tu khong thay doi bac O(n).
// Memory phu: O(1) trong moi truong hop, chi dung them vai bien.
// Mang tinh a[100] trong code chiem O(1) bo nho cap phat (kich thuoc co dinh).
// Neu tong quat hoa mang co n phan tu: tong memory O(n).
