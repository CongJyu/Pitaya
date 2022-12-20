// h02p09

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m = 0, n = 0;
    cin >> m >> n;
    int total_brick = 0;
    if (m % 2 == 0 && n % 2 != 0) {
        total_brick = (m / 2) * n;
    } else if (m % 2 != 0 && n == 0) {
        total_brick = m * (n / 2);
    } else if (m % 2 != 0 && n % 2 != 0) {
        total_brick = (m / 2) * n + (n / 2) + 1;
    } else if (m % 2 == 0 && n % 2 == 0) {
        total_brick = m * n / 2;
    }
    cout << total_brick << endl;
    return 0;
}
