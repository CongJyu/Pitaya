// t04p11

#include <iostream>

using namespace std;

/*
 * ai = 0 第 i 天健身房不开放，互联网上也没有竞赛
 * ai = 1 第 i 天健身房不开放，但互联网上有竞赛
 * ai = 2 第 i 天健身房开放，但互联网上没有竞赛
 * ai = 3 第 i 天健身房开放，互联网上也有竞赛
 */

int a[110];
int n;
int dp[110][3];

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            dp[i][j] = 10000;
        }
    }
    if (a[1] == 1) {
        dp[1][1] = 0;
    }
    if (a[1] == 2) {
        dp[1][2] = 0;
    }
    if (a[1] == 3) {
        dp[1][1] = 0;
        dp[1][2] = 0;
    }
    dp[1][0] = 1;
    for (int i = 2; i <= n; ++i) {
        if (a[i] == 1) {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        } else if (a[i] == 2) {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        } else if (a[i] == 3) {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
        dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
    }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
    return 0;
}
