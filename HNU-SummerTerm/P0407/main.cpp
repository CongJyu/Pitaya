// p0407

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int max_len{1}, tmp{1};
    for (int i{1}; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            tmp++;
            if (tmp > max_len) {
                max_len = tmp;
            }
        } else {
            tmp = 1;
        }
    }
    cout << max_len << endl;
    delete[] a;
    return 0;
}
