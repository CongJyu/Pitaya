// p0503

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{}, n{};
    map<long long, long long> dp;
    long long a, max_core;
    cin >> t;
    while (t--) {
        dp.clear();
        max_core = -1;
        cin >> n;
        for (int i{}; i < n; ++i) {
            cin >> a;
            dp[i + a] = max(dp[i + a], dp[i] + a);
            max_core = max_core > dp[i + a] ? max_core : dp[i + a];
        }
        cout << max_core << endl;
    }
    return 0;
}
