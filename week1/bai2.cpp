#include <iostream>
using namespace std;

void sapXep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Neu phan tu truoc lon hon phan tu sau thi doi cho
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sapXep(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

// PHAN TICH DO PHUC TAP (n: so phan tu)
// sapXep so sanh n*(n-1)/2 cap phan tu trong moi truong hop.
// Best (da tang dan): O(n^2), khong doi cho nhung van so sanh het.
// Average (thu tu ngau nhien): O(n^2).
// Worst (vi du giam dan): O(n^2), co nhieu lan doi cho.
// Ca chuong trinh: O(n^2); nhap va xuat mang la O(n).
// Memory phu: O(1) trong moi truong hop, chi dung them vai bien.
// Mang tinh a[100] trong code chiem O(1) bo nho cap phat (kich thuoc co dinh).
// Neu tong quat hoa mang co n phan tu: tong memory O(n).
