// p0417

#include <iostream>
#include <vector>

using namespace std;

int dp[505][505], a[505][505];

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= i; ++j) {
            cin >> a[i][j];
        }
    }
    vector<int> path;
    dp[1][1] = a[1][1];
    for (int i{2}; i <= n; ++i) {
        for (int j{1}; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
        }
    }
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            clog << dp[i][j] << " ";
        }
        clog << endl;
    }
    int ans{};
    for (int i{1}; i <= n; ++i) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
//    for (int i{}; i < (int) path.size(); ++i) {
//        cout << path.at(i) << " ";
//    }
//    cout << endl;
    return 0;
}
