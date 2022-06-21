// t01p09

#include <iostream>

using namespace std;

int main() {
    int n = 0, p1 = 0, p2 = 0, p3 = 0, t1 = 0, t2 = 0;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int time[n][2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> time[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += (time[i][1] - time[i][0]) * p1;
        int get;
        if (i == n - 1) {
            break;
        }
        get = time[i + 1][0] - time[i][1];
        if (get >= t1) {
            ans += t1 * p1;
            get -= t1;
            if (get >= t2) {
                ans += t2 * p2;
                get -= t2;
                ans += get * p3;
            } else {
                ans += get * p2;
            }
        } else {
            ans += get * p1;
        }
    }
    cout << ans << endl;
    return 0;
}
