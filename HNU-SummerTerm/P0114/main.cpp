// p0114
// wrong answer

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string day[7] = {
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday"
};

int days(const string &ss) {
    for (int i{}; i < 7; ++i) {
        if (day[i] == ss) {
            return i + 1;
        }
    }
    return -1;
}

void solution() {
    ios::sync_with_stdio(false);
    string s, e;
    cin >> s >> e;
    int l{}, r{};
    cin >> l >> r;
    int start{days(s)}, end{days(e)};
    int temp{abs(end - start) + 1}, sum{}, result{};
    if (start > end) {
        temp += 7;
    }
    for (int i{l}; i < r; ++i) {
        if (i % 7 == temp % 7) {
            sum += 1;
            result = i;
        }
    }
    if (sum == 0) {
        cout << "impossible" << endl;
    } else if (sum == 1) {
        cout << result << endl;
    } else {
        cout << "many" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
