#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long gt = 1;
    cin >> n;
    // Tinh n! = 1 * 2 * ... * n
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    cout << n << "! = " << gt;
    return 0;
}

// PHAN TICH DO PHUC TAP
// Voi n >= 1, vong lap thuc hien n phep nhan: Time O(n).
// Voi cung n, so lan lap co dinh; khong co best/average/worst khac nhau.
// Truong hop n = 0: Time O(1), ket qua 0! = 1.
// Memory: O(1) trong moi truong hop, chi dung cac bien n, gt, i.
// Phan tich coi phep toan tren kieu so co dinh la O(1).
// unsigned long long thong dung luu chinh xac n! voi 0 <= n <= 20.
