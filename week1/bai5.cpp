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
