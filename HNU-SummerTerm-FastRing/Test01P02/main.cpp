// 测试 1 问题 2

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a = new int[n];
        int sum = 0;
        double ave, ss = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        ave = (sum * 1.0) / n;
        for (int i = 0; i < n; ++i) {
            ss += ((a[i] - ave) * (a[i] - ave));
        }
        ss /= n;
        cout << floor(ss) << endl;
    }
    return 0;
}
