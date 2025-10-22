#include <iostream>
using namespace std;

// Hàm findMax bị lỗi như đề bài
int findMax(int num1, int num2, int num3) {
    int max = 0;
    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num1) && (num2 > num3))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    return max;
}

void runTest(int a, int b, int c, int expected) {
    int result = findMax(a, b, c);
    cout << "Input: (" << a << ", " << b << ", " << c << ") "
         << " => Expected: " << expected
         << " | Got: " << result;

    if (result == expected)
        cout << "  [PASS]";
    else
        cout << "  [FAIL]";
    cout << endl;
}

int main() {
    // Test case 1: Tất cả âm
    runTest(-5, -2, -9, -2);

    // Test case 2: Hai số bằng nhau và lớn nhất
    runTest(5, 5, 3, 5);

    // Test case 3: Ba số bằng nhau
    runTest(4, 4, 4, 4);

    // Test case 4: Bình thường (3 số khác nhau, dương)
    runTest(2, 8, 5, 8);

    return 0;
}
