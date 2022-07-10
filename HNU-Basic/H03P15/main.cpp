// h03p15

#include <iostream>
#include <iomanip>

using namespace std;

double fn(double x) {
    double y = 0;
    if (x > 2 && x <= 10) {
        y = x * (x + 2);
    } else if (x > -1 && x <= 2) {
        y = 2 * x;
    } else if (x <= -1) {
        y = x - 1;
    }
    return y;
}

int main() {
    ios::sync_with_stdio(false);
    double x = 0;
    cin >> x;
    cout << fixed << setprecision(6) << fn(x) << endl;
    return 0;
}
