// p0419

#include <iostream>
#include <cstring>

using namespace std;

int coef[21];  // 系数
int factor[20]; // 指数
int n{};

// dfs
void dfs(int num, int time, int curr_coef) {
    if (num == n) {
        coef[time] += curr_coef;
        return;
    }
    dfs(num + 1, time, curr_coef * factor[num]);
    dfs(num + 1, time + 1, curr_coef);
}

int main() {
    ios::sync_with_stdio(false);
    int verify[21];
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        memset(coef, 0, sizeof(coef));
        memset(verify, 0, sizeof(verify));
        for (int i{}; i < n; ++i) {
            cin >> factor[i];
        }
        for (int i{}; i < n; ++i) {
            cin >> verify[i];
        }
        dfs(0, 0, 1);
        int i{};
        for (i = 0; i < n; ++i) {
            if (coef[i] != verify[n - i - 1]) {
                cout << "N" << endl;
                break;
            }
        }
        if (i == n) {
            cout << "Y" << endl;
        }
    }
    return 0;
}
