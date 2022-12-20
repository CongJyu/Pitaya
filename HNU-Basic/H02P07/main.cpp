// h02p07

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int code = 0;
    double cash = 0;
    cin >> code >> cash;
    cout << setw(8) << setfill('0') << code << endl;
    cout << fixed << setprecision(2) << cash << endl;
    return 0;
}
