// p0109

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, p1{}, p2{}, p3{}, t1{}, t2{};
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int *l{new int[n]};
    int *r{new int[n]};
    int total{};
    for (int i{}; i < n; ++i) {
        cin >> l[i] >> r[i];
        total += (r[i] - l[i]) * p1;
    }
    for (int i{1}; i < n; ++i) {
        int time{l[i] - r[i - 1]};
        if (time <= t1) {
            total += p1 * time;
        } else if (time > t1 and time <= t1 + t2) {
            total += p1 * t1 + (time - t1) * p2;
        } else if (time > t1 + t2) {
            total += p1 * t1 + t2 * p2 + (time - t1 - t2) * p3;
        }
    }
    cout << total << endl;
    delete[] l;
    delete[] r;
    return 0;
}
