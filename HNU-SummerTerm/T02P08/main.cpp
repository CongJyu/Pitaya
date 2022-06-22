// t02p08

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int **a = new int *[n + 1];
    for (int i = 0; i < n + 1; ++i) {
        a[i] = new int[n + 1];
    }
    for (int i = 1; n - 2 * (i - 1) > 0; ++i) {
        for (int x = 1; x <= n - 2 * i + 1; ++x) {
            a[i][i + (x - 1)] = (n - i + 1) * 4 * (i - 1) + x;
            a[i + (x - 1)][n - i + 1] = (n - i + 1) * 4 * (i - 1) + x + (n - 2 * i + 1);
            a[n - i + 1][(n - i + 1) - (x - 1)] = (n - i + 1) * 4 * (i - 1) + x + (n - 2 * i + 1) * 2;
            a[(n - i + 1) - (x - x)][i] = (n - i + 1) * 4 * (i - 1) + x + (n - 2 * i + 1) * 3;
        }
    }
    // output
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
