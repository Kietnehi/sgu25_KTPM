// bai2_tests.cpp  (C++98 compatible)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Mô tả kỳ vọng:
// type = -2  -> Infinite solutions
// type = -1  -> No solution
// type =  0  -> Có nghiệm: n nghiệm thực phân biệt, roots[] sắp tăng dần
struct Test {
    double a, b, c;
    int type;   // -2, -1, 0
    int n;      // số nghiệm khi type == 0
    double roots[4]; // tối đa 4 nghiệm thực phân biệt
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const double SQRT_HALF = sqrt(0.5);

    // Dùng mảng thuần C để tương thích C++98
    Test tests[] = {
        //  #  (a,b,c)                 type  n   roots (tăng dần)
        { 0,  0,  0,                  -2,   0,  { } },                                    // 1: Infinite solutions
        { 0,  0,  5,                  -1,   0,  { } },                                    // 2: No solution
        { 0,  2, -8,                   0,   2,  { -2, 2 } },                               // 3
        { 0,  3,  0,                   0,   1,  { 0 } },                                   // 4
        { 1,  0, -1,                   0,   2,  { -1, 1 } },                               // 5
        { 1, -2,  1,                   0,   2,  { -1, 1 } },                               // 6
        { 1,  2,  1,                  -1,   0,  { } },                                     // 7
        { 1,  0,  0,                   0,   1,  { 0 } },                                   // 8
        { 1,  1, -2,                   0,   2,  { -1, 1 } },                               // 9
        { 2, -3,  1,                   0,   4,  { -1, -SQRT_HALF, SQRT_HALF, 1 } },       // 10
        { 3,  0,  3,                  -1,   0,  { } },                                     // 11
        { 1, -1,  0,                   0,   3,  { -1, 0, 1 } },                            // 12
    };

    const size_t T = sizeof(tests) / sizeof(tests[0]);

    cout << fixed << setprecision(10);
    for (size_t i = 0; i < T; ++i) {
        const Test& t = tests[i];
        cout << "Test #" << (i+1) << ": a=" << t.a << ", b=" << t.b << ", c=" << t.c << "\n";
        if (t.type == -2) {
            cout << "  Expect: Infinite solutions\n";
        } else if (t.type == -1) {
            cout << "  Expect: No solution\n";
        } else {
            cout << "  Expect: " << t.n << " distinct real root(s): ";
            for (int k = 0; k < t.n; ++k) {
                cout << t.roots[k];
                if (k + 1 < t.n) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
