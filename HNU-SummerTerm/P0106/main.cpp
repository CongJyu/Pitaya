// p0106

#include <iostream>
#include <algorithm>

using namespace std;

struct E {
    string s;
    int order{};
    int input{};
};

bool cmp(const E &a, const E &b) {
    if (a.order != b.order) {
        return a.order < b.order;
    } else {
        return a.input < b.input;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    E *e{new E[m]};
    for (int i{}; i < m; ++i) {
        cin >> e[i].s;
        e[i].input = i;
        for (int j{}; j < n - 1; ++j) {
            for (int k{j + 1}; k < n; ++k) {
                if (e[i].s[j] > e[i].s[k]) {
                    e[i].order++;
                }
            }
        }
    }
    sort(e, e + m, cmp);
    for (int i{}; i < m; ++i) {
        cout << e[i].s << endl;
    }
    delete[] e;
    return 0;
}
