#include <iostream>
#include <string>

using namespace std;

int f2(int x) {
    if (x > 10)
        return 2 * x;
    else if (x > 0)
        return -x;
    else
        return 2 * x;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: ./f1 <number>" << endl;
        return 1;
    }
    int n = stoi(argv[1]);
    cout << "f2(" << n << ") = " << f2(n) << endl;
    return 0;
}