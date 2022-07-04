// 实验八

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m = 0, n = 0;
    int a[30][30];
    memset(a, 0, sizeof(a));
    while (cin >> m >> n) {
        a[0][0] = 0;
        for (int i = 1; i <= m; ++i) {
            a[i][1] = 1;
        }
        for (int j = 1; j <= n; ++j) {
            a[1][j] = 1;
        }
        for (int i = 2; i <= m; ++i) {
            for (int j = 2; j <= n; ++j) {
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
        cout << a[m][n] << endl;
    }
    return 0;
}
