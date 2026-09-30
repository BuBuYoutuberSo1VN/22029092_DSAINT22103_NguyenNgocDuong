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
