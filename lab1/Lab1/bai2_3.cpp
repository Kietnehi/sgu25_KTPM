// bai2_grader_single.cpp  (C++98 compatible)
// Muc dich: Tu dong cham dung/sai cho ham solveQuartic(a,b,c,x[])
// Cach dung:
//   1) Dan ham cua ban vao vung "DAN HAM CUA BAN VAO DAY"
//   2) Bien dich: g++ -O2 -std=c++98 bai2_grader_single.cpp -o bai2_grader
//   3) Chay:     ./bai2_grader

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

static const double EPS = 1e-9;
static inline bool feq(double a, double b, double eps = EPS) { return fabs(a - b) <= eps; }

// ====================== DAN HAM CUA BAN VAO DAY (KHONG KEM main) ======================
// Phai giu dung chu ky:
// int solveQuartic(double a, double b, double c, double x[]);

// ====== VI DU: ham goc theo de (hay THAY THE bang ham THUC TE cua ban) ======
int solveQuartic(double a, double b, double c, double x[]) {
    if (a == 0 && b == 0 && c == 0) return -1;
    if (a == 0 && b == 0) return 0;
    if (a == 0) {
        double y = -c / b;
        if (y < 0) return 0;
        x[0] = sqrt(y);
        x[1] = -sqrt(y);
        return 2;
    }
    double delta = b*b - 4*a*c;
    if (delta < 0) return 0;
    double y1 = (-b + sqrt(delta)) / (2*a);
    double y2 = (-b - sqrt(delta)) / (2*a);
    int cnt = 0;
    if (y1 >= 0) {
        x[cnt++] = sqrt(y1);
        x[cnt++] = -sqrt(y1);
    }
    if (y2 >= 0 && y2 != y1) {
        x[cnt++] = sqrt(y2);
        x[cnt++] = -sqrt(y2);
    }
    return cnt;
}
// ====================== HET VUNG DAN HAM ======================

// Them 1 gia tri vao vector neu chua ton tai (phan biet theo EPS)
static void addDistinct(vector<double>& v, double val) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (feq(v[i], val)) return;
    }
    v.push_back(val);
}

// Loi giai tham chieu: tra ve nghiem thuc PHAN BIET, da sap xep tang dan
static vector<double> refSolveDistinct(double a, double b, double c) {
    vector<double> s;

    // Truyen dat: a=b=c=0 -> vo so nghiem (se xu ly o ngoai)
    if (feq(a,0) && feq(b,0) && feq(c,0)) {
        return s; // tra rong, nhung co co ky hieu infinite o ngoai
    }

    if (feq(a,0) && feq(b,0)) {
        // c != 0 -> vo nghiem
        return vector<double>();
    }

    if (feq(a,0)) {
        // bx^2 + c = 0 -> x^2 = -c/b
        if (feq(b,0)) return vector<double>();
        double y = -c / b;
        if (y < -EPS) return vector<double>();
        if (feq(y,0)) {
            addDistinct(s, 0.0);
        } else {
            double r = sqrt(y > 0 ? y : 0.0);
            addDistinct(s, -r);
            addDistinct(s,  r);
        }
    } else {
        long double A=a, B=b, C=c;
        long double D = B*B - 4*A*C;
        if (D >= -1e-18L) {
            long double sD = (D < 0) ? 0 : sqrt((long double)D);
            long double y1 = (-B + sD) / (2*A);
            long double y2 = (-B - sD) / (2*A);

            // xu ly tung y
            if (y1 >= -1e-18L) {
                if (fabsl(y1) <= 1e-18L) addDistinct(s, 0.0);
                else {
                    double r1 = sqrt((double)(y1 > 0 ? y1 : 0.0L));
                    addDistinct(s, -r1);
                    addDistinct(s,  r1);
                }
            }
            if (y2 >= -1e-18L) {
                if (fabsl(y2) <= 1e-18L) addDistinct(s, 0.0);
                else {
                    double r2 = sqrt((double)(y2 > 0 ? y2 : 0.0L));
                    addDistinct(s, -r2);
                    addDistinct(s,  r2);
                }
            }
        }
    }

    sort(s.begin(), s.end());
    return s;
}

// Loai trung theo EPS sau khi sap xep
static void uniqueWithEps(vector<double>& v) {
    sort(v.begin(), v.end());
    vector<double> u;
    for (size_t i = 0; i < v.size(); ++i) {
        if (u.empty() || !feq(u.back(), v[i])) u.push_back(v[i]);
    }
    v.swap(u);
}

// Bo test
struct TestABC { double a, b, c; };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    TestABC tests[] = {
        // 12 test co ban
        (TestABC){0,0,0},   // 1: infinite
        (TestABC){0,0,5},   // 2: none
        (TestABC){0,2,-8},  // 3: ±2
        (TestABC){0,3,0},   // 4: 0
        (TestABC){1,0,-1},  // 5: ±1
        (TestABC){1,-2,1},  // 6: ±1
        (TestABC){1,2,1},   // 7: none
        (TestABC){1,0,0},   // 8: 0
        (TestABC){1,1,-2},  // 9: ±1
        (TestABC){2,-3,1},  // 10: ±1, ±sqrt(0.5)
        (TestABC){3,0,3},   // 11: none
        (TestABC){1,-1,0},  // 12: -1,0,1
    };
    const size_t T = sizeof(tests) / sizeof(tests[0]);

    int pass = 0, total = (int)T;
    cout << fixed << setprecision(10);

    for (size_t i = 0; i < T; ++i) {
        double a = tests[i].a, b = tests[i].b, c = tests[i].c;

        // goi ham cua ban
        double xout[8];
        int n = solveQuartic(a, b, c, xout);

        // giai tham chieu
        vector<double> ref = refSolveDistinct(a, b, c);
        bool isInfiniteRef = (feq(a,0) && feq(b,0) && feq(c,0));
        bool isNoRef = (!isInfiniteRef && ref.empty());

        bool ok = true;
        string reason;

        if (isInfiniteRef) {
            if (n != -1) { ok = false; reason = "Expected infinite (-1)."; }
        } else if (isNoRef) {
            if (n != 0) { ok = false; reason = "Expected no solution (0)."; }
        } else {
            // chuan hoa output chuong trinh: sort + loai trung theo EPS
            vector<double> got;
            for (int k = 0; k < n; ++k) got.push_back(xout[k]);
            uniqueWithEps(got);

            if ((int)got.size() != (int)ref.size()) {
                ok = false; reason = "Different number of DISTINCT real roots.";
            } else {
                for (size_t k = 0; k < ref.size(); ++k) {
                    if (!feq(got[k], ref[k])) { ok = false; reason = "Root value mismatch."; break; }
                }
            }
        }

        if (ok) {
            cout << "[PASS] Test #" << (i+1) << " (a="<<a<<", b="<<b<<", c="<<c<<")\n";
            pass++;
        } else {
            cout << "[FAIL] Test #" << (i+1) << " (a="<<a<<", b="<<b<<", c="<<c<<") -> " << reason << "\n";
            cout << "  Expected distinct roots: ";
            if (isInfiniteRef) cout << "Infinite\n";
            else if (isNoRef) cout << "None\n";
            else {
                for (size_t k = 0; k < ref.size(); ++k) cout << ref[k] << " ";
                cout << "\n";
            }
            cout << "  Program returned n=" << n << ", roots: ";
            for (int k = 0; k < n; ++k) cout << xout[k] << " ";
            cout << "\n";
        }
    }

    cout << "\nSummary: " << pass << "/" << total << " tests passed.\n";
    return 0;
}
