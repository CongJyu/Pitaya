// t01p11

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        double average = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        average = sum / n;
        double ss = 0;
        for (int i = 0; i < n; ++i) {
            ss += (a[i] - average) * (a[i] - average);
        }
        cout << floor(ss / n) << endl;
    }
    return 0;
}
