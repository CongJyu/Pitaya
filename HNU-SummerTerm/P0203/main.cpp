// p0203

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int min_v{a[0]}, max_v{a[n - 1]};
    int min_delta{100000}, delta;
    int flag{};
    for (int i{}; i < n; ++i) {
        delta = abs(abs(a[i] - max_v) - (a[i] - min_v));
        if (delta < min_delta) {
            min_delta = delta;
            flag = a[i];
        }
    }
    cout << flag << endl;
    return 0;
}
