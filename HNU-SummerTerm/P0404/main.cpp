// p0404

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a{new int[n]};
        for (int i{}; i < n; ++i) {
            cin >> a[i];
        }
        int disorder{};
        for (int i{}; i < n - 1; ++i) {
            for (int j{i + 1}; j < n; ++j) {
                if (a[i] > a[j]) {
                    disorder++;
                }
            }
        }
        cout << disorder << endl;
        delete[] a;
    }
    return 0;
}
