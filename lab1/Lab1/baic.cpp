#include <iostream>
using namespace std;

int f2(int x) {
    if (x < 10)
        return 2 * x;
    else if (x < 2)   // Đây là dead code (không bao giờ chạy)
        return -x;
    else
        return 2 * x;
}

int main() {
    // Test case 1: x < 10
    int x1 = 5;
    cout << "f2(" << x1 << ") = " << f2(x1) << " (expected 10)" << endl;

    // Test case 2: x >= 10
    int x2 = 12;
    cout << "f2(" << x2 << ") = " << f2(x2) << " (expected 24)" << endl;

    return 0;
}
