//  P_385 圆柱表面积

#include <iostream>

using namespace std;

const double pi = 3.1415;

int main() {
    double r = 0, h = 0, s = 0;
    while (cin >> r >> h) {
        s = 2 * r * r * pi + 2 * pi * r * h;
        cout << s << endl;
    }
    return 0;
}
