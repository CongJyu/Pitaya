// p0221

#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    int no{};
    int pos{};
    int vel{};

    bool operator<(const Person &another) const {
        if (pos == another.pos) {
            return vel > another.vel;
        } else {
            return pos < another.pos;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    Person *runner{new Person[n]};
    for (int i{1}; i <= n; ++i) {
        runner[i - 1].no = i;
        cin >> runner[i - 1].pos;
    }
    for (int i{1}; i <= n; ++i) {
        cin >> runner[i - 1].vel;
    }

    sort(runner, runner + n);

    int max_v{runner[0].vel}, k{};
    while (runner[k].no != m) {
        if (runner[k].vel > max_v) {
            max_v = runner[k].vel;
        }
        k++;
    }
    if (max_v < runner[k].vel) {
        max_v = runner[k].vel;
    }

    int min_v{runner[k].vel}, impossible{};
    for (int i{k + 1}; i < n; ++i) {
        if (runner[i].vel >= max_v and runner[i].pos > runner[k].pos) {
            impossible++;
        }
        if (runner[i].vel < min_v) {
            min_v = runner[i].vel;
        }
    }
    for (int i{}; i < k; ++i) {
        if (runner[i].vel <= min_v and runner[i].pos < runner[k].pos) {
            impossible++;
        }
    }
    cout << n - impossible << endl;
    return 0;
}
