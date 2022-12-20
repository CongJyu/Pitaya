// h03p04

#include <iostream>

using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    ios::sync_with_stdio(false);
    int n = 0, m = 0;
    cin >> n >> m;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        if (m == 2) {
            cout << 29 << endl;
        } else {
            cout << month[m - 1] << endl;
        }
    } else {
        cout << month[m - 1] << endl;
    }
    return 0;
}
