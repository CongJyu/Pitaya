// t03p13

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int p, k;
    while (cin >> n) {
        int *ms = new int[n];
        int *l = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> ms[i];
        }
        // greedy
        k = 1;
        l[0] = ms[0];
        for (int i = 1; i < n; ++i) {
            p = 0;
            for (int j = 0; j < k; ++j) {
                if (l[j] >= ms[i]) {
                    // code
                    if (p == 0) {
                        p = j;
                    } else if (l[j] < l[p]) {
                        p = j;
                    }
                }
            }
            if (p == 0) {
                l[++k] = ms[i];
            } else {
                l[p] = ms[i];
            }
        }
        int x, y = 0;
        y = 1;
        for (int i = 0; i < n; ++i) {
            x = 1;
            for (int j = 0; j < i; ++j) {
                if (ms[j] >= ms[i] && l[j] + 1 > x) {
                    x = l[j] + 1;
                }
            }
            l[i] = x;
            if (x > y) {
                y = x;
            }
        }
        cout << y << endl;
        delete[] ms;
    }
    return 0;
}
