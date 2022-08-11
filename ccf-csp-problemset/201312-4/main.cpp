// ccf-csp 201312-4
// no idea

#include <iostream>

using namespace std;

const long long mod{1000000007};

void solution(int n) {
    long long **s{new long long *[n]};
    for (long long i{}; i < n; ++i) {
        s[i] = new long long[6];
    }
    for (int i{}; i < 6; ++i) {
        s[0][i] = 0;
    }
    for (long long i{1}; i <= n; ++i) {
        long long j{i - 1};
        s[i][0] = 1;
        s[i][1] = (s[j][0] + s[j][1] * 2) % mod;
        s[i][2] = (s[j][0] + s[j][2]) % mod;
        s[i][3] = (s[j][1] + s[j][3] * 2) % mod;
        s[i][4] = (s[j][1] + s[j][2] + s[j][4] * 2) % mod;
        s[i][5] = (s[j][3] + s[j][4] + s[j][5] * 2) % mod;
    }
    cout << s[n][5] << endl;
    delete[] s;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    solution(n);
    return 0;
}
