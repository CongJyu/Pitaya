// t01p14

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string day[7] = {
            "monday",
            "tuesday",
            "wednesday",
            "thursday",
            "friday",
            "saturday",
            "sunday"
    };
    for (int i = 0; i < n; ++i) {
        string s, e;
        cin >> s >> e;
        int l, r, ss = 0, ee = 0, x, y;
        cin >> l >> r;
        for (int j = 0; j < 7; ++j) {
            if (s == day[j]) {
                ss = j;
            }
            if (e == day[j]) {
                ee = j;
            }
        }
        if (ss > ee) {
            ss += 7;
        }
        x = ee - ss + 1;
        y = x + 7;
        if (x >= l && x <= r) {
            if (y <= r) {
                cout << "many" << endl;
            } else {
                cout << x << endl;
            }
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
