// p0420

#include <iostream>
#include <algorithm>

using namespace std;

struct Com {
    int order;
    int score;
    int rank;
};

bool cmp_1(Com x, Com y) {
    return x.score > y.score;
}

bool cmp_2(Com x, Com y) {
    return x.order < y.order;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    Com *a{new Com[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i].score;
        a[i].order = i;
    }
    sort(a, a + n, cmp_1);
    int rank_num{1};
    a[0].rank = rank_num;
    for (int i{1}; i < n; ++i) {
        if (a[i].score != a[i - 1].score) {
            rank_num++;
            a[i].rank = rank_num;
        } else {
            a[i].rank = rank_num;
        }
    }
    sort(a, a + n, cmp_2);
    for (int i{}; i < n; ++i) {
        cout << a[i].rank << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}
