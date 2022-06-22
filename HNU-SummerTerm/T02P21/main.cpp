// t02p21

#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    int no;
    int pos;
    int vel;

    bool operator<(const Person &another) const {
        if (pos == another.pos) {
            return vel > another.vel;
        } else {
            return pos < another.pos;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    auto *runner = new Person[n];
    for (int i = 1; i <= n; i++) {
        runner[i - 1].no = i;
        cin >> runner[i - 1].pos;
    }
    for (int i = 1; i <= n; i++) {
        cin >> runner[i - 1].vel;
    }

    sort(runner, runner + n);

    int maxV = runner[0].vel, k = 0;
    while (runner[k].no != m) {
        if (runner[k].vel > maxV) {
            maxV = runner[k].vel;
        }
        k++;
    }
    if (maxV < runner[k].vel) {
        maxV = runner[k].vel;
    }

    int minV = runner[k].vel, impossible = 0;
    for (int i = k + 1; i < n; i++) {
        if (runner[i].vel >= maxV && runner[i].pos > runner[k].pos) {
            impossible++;
        }
        if (runner[i].vel < minV) {
            minV = runner[i].vel;
        }
    }
    for (int i = 0; i < k; i++) {
        if (runner[i].vel <= minV && runner[i].pos < runner[k].pos) {
            impossible++;
        }
    }
    cout << n - impossible << endl;
    return 0;
}
