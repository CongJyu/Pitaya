// t01p06

#include <iostream>
#include <algorithm>

using namespace std;

struct Series {
    string str;
    int count{};
    int order{};
};

bool cmp(const Series &a, const Series &b) {
    if (a.count < b.count) {
        return true;
    } else {
        if (a.count == b.count) {
            if (a.order < b.order) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    auto *x = new Series[m];
    char y;
    for (int i = 0; i < m; ++i) {
        cin >> x[i].str;
        x[i].count = 0;
        x[i].order = 0;
    }
    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < n; ++k) {
            y = x[i].str[k];
            for (int j = k + 1; j < n; ++j) {
                if (x[i].str[j] < y) {
                    x[i].count++;
                }
            }
        }
    }
    sort(x, x + m, cmp);
    for (int i = 0; i < m; ++i) {
        cout << x[i].str << endl;
    }
    return 0;
}
