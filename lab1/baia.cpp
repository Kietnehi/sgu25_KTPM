#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10)
        return 2 * x;
    else
        return -x;
}

int main() {
    // Khai báo mảng test case
    int testCases[] = {9, 10, 11};
    int total = sizeof(testCases) / sizeof(testCases[0]);

    cout << "=== Kiem thu ham f1 ===" << endl;

    // Chạy qua từng test case
    for (int i = 0; i < total; i++) {
        int x = testCases[i];
        cout << "Test case " << (i+1) << ": x = " << x << endl;
        cout << "Ket qua: f1(" << x << ") = " << f1(x) << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}
