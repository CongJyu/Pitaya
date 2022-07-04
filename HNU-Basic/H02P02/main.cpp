// h02p02

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double c, f = 0;
    cin >> f;
    c = 5 * (f - 32) / 9;
    cout << fixed << setprecision(5) << c << endl;
    return 0;
}
