#include <iostream>
#include <iomanip>
#include <cmath>

// Hàm f3 giữ nguyên như đề
int f3(int x) {
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}

int main() {
    // Test-case: bao phủ cả if (true) và else (false)
    int tests[] = {0, 3};
    int n = sizeof(tests) / sizeof(tests[0]);

    std::cout.setf(std::ios::fixed);
    std::cout << std::setprecision(6);

    for (int i = 0; i < n; i++) {
        int x = tests[i];
        double expr = x * 1.0 * x * cos(x);
        double lhs  = log(expr);   // có thể -inf hoặc NaN
        double rhs  = 3.0 * x;
        bool cond   = (lhs < rhs);

        int result = f3(x);
        std::cout << "x=" << x
                  << " | x^2*cos(x)=" << expr
                  << " | log(...)=" << lhs
                  << " | 3x=" << rhs
                  << " | cond=" << (cond ? "true" : "false")
                  << " | f3(x)=" << result
                  << std::endl;
    }

    return 0;
}
