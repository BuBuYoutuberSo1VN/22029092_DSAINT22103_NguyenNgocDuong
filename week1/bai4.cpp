#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    // Thuat toan Euclid tim UCLN
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutGon(int a, int b) {
    if (b == 0) {
        cout << "Mau so khong hop le";
        return;
    }
    // Chia ca tu va mau cho UCLN
    int ucln = UCLN(a, b);
    a /= ucln;
    b /= ucln;
    // Dua dau am len tu so
    if (b < 0) {
        a = -a;
        b = -b;
    }
    cout << a << "/" << b;
}

int main() {
    int a, b;
    cin >> a >> b;
    rutGon(a, b);
    return 0;
}

// PHAN TICH DO PHUC TAP
// Goi A = |a|, B = |b|; coi phep chia va lay du la O(1).
// Best: O(1) khi b = 0 (tu choi mau), a = 0, hoac A chia het B.
// Worst: O(log(1 + min(A, B))); so Fibonacci lien tiep can nhieu buoc Euclid.
// Average: khong co gia tri duy nhat neu chua quy dinh phan bo dau vao.
// Can tren cho moi dau vao: O(1 + log(1 + min(A, B))).
// Rut gon va chuan hoa dau sau UCLN: O(1).
// Memory phu va tong memory: O(1) trong moi truong hop.
