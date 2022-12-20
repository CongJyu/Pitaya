// p0103

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int y{};
    int *x{new int[n]};
    int cnt_pos{};
    for (int i{}; i < n; ++i) {
        cin >> x[i] >> y;
        if (x[i] > 0) {
            cnt_pos++;
        }
    }
    if (cnt_pos <= 1 or (n - cnt_pos) <= 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    delete[] x;
    return 0;
}
