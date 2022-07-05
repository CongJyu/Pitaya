// h02p08

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int k = 0, n = 0, w = 0;
    cin >> k >> n >> w;
    int total_cost = 0;
    for (int i = 1; i <= w; ++i) {
        total_cost += i * k;
    }
    if (n >= total_cost) {
        cout << 0 << endl;
    } else {
        cout << total_cost - n << endl;
    }
    return 0;
}
