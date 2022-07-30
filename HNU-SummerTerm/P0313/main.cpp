// p0313

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, p, k;
    while (cin >> n) {
        int *ms{new int[n]}, *l{new int[n]};
        for (int i{}; i < n; ++i) {
            cin >> ms[i];
        }
        k = 1;
        l[0] = ms[0];
        for (int i{1}; i < n; ++i) {
            p = 0;
            for (int j{}; j < k; ++j) {
                if (l[j] >= ms[i]) {
                    if (p == 0) {
                        p = j;
                    } else if (l[j] < l[p]) {
                        p = j;
                    }
                }
            }
            if (p == 0) {
                k++;
                l[k] = ms[i];
            } else {
                l[p] = ms[i];
            }
        }
        int x, y{1};
        for (int i{}; i < n; ++i) {
            x = 1;
            for (int j{}; j < i; ++j) {
                if (ms[j] >= ms[i] and l[j] + 1 > x) {
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
        delete[] l;
    }
    return 0;
}
