// t01p14

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string day[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

int get_day(const string &in) {
    for (int i = 0; i < 7; ++i) {
        if (day[i] == in) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        string s, e;
        int l = 0, r = 0;
        cin >> s >> e >> l >> r;
        int d_start = get_day(s);
        int d_end = get_day(e);
        int tmp = abs(d_start - d_end) + 1;
        if (d_start > d_end) {
            tmp += 7;
        }
        int sum = 0, ans;
        for (int i = l; i <= r; ++i) {
            if (i % 7 == tmp % 7) {
                sum++;
                ans = i;
            }
        }
        if (sum == 0) {
            cout << "impossible" << endl;
        } else if (sum == 1) {
            cout << ans << endl;
        } else if (sum > 1) {
            cout << "many" << endl;
        }
    }
    return 0;
}
