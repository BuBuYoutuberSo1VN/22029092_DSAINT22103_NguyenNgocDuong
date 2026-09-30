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
