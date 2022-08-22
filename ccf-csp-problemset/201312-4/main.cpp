// ccf-csp 201312-4

#include <iostream>

using namespace std;

const int mod{1000000007};
int c[1010][1010];

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;

    for (int i{}; i <= n; ++i) {
        for (int j{}; j <= i; ++j) {
            if (!j) {
                c[i][j] = 1;
            } else {
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
            }
        }
    }

    long long result{};
    for (int i{2}; i <= n - 2; ++i) {
        result = (result + (long long) (c[n - 1][i] * (i - 1) * (n - i - 1))) % mod;
    }
    cout << result << endl;
    return 0;
}
