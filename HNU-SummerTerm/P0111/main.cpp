// p0111

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a{new int[n]};
        double ave{};
        for (int i{}; i < n; ++i) {
            cin >> a[i];
            ave += a[i];
        }
        ave /= n;
        double ss{};
        for (int i{}; i < n; ++i) {
            ss += (a[i] - ave) * (a[i] - ave);
        }
        ss /= n;
        cout << floor(ss) << endl;
        delete[] a;
    }
    return 0;
}
