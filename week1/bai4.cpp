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
