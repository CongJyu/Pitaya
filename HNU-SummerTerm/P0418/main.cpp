// p0418

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{};  // 需要凑的钱数
    while (true) {
        cin >> m;
        if (m == 0) {
            break;
        }
        int k{};  // 币种个数
        cin >> k;
        int *a{new int[k]}, *dp{new int[m + 1]};  // 存储所有币种，凑 i 元时需要的最小钱币数
        for (int i{}; i < m + 1; ++i) {
            dp[i] = INT_MAX / 10;
        }
        dp[0] = 0;  // 边界条件
        for (int i{}; i < k; ++i) {
            cin >> a[i];
        }
        sort(a, a + k);  // 升序排列币种
        for (int i{1}; i < m + 1; ++i) {
            for (int j{}; j < k; ++j) {
                if (a[j] > i) {
                    break;
                } else {
                    dp[i] = min(dp[i - a[j]] + 1, dp[i]);  // 考虑要不要选择当前币种
                }
            }
        }
        if (dp[m] != INT_MAX / 10) {
            cout << dp[m] << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
