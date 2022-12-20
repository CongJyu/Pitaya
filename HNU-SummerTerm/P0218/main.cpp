// p0218

#include <iostream>

using namespace std;

char board[2001][2001];
int num[2001]{0};
int n{}, result{};

void dfs(int i, int j, int depth) {
    if (board[i][j] == '0') {
        return;
    }
    if (i + depth - 1 > n or j + depth - 1 > n) {
        return;
    }
    for (int k{1}; k <= depth; ++k) {
        for (int l{1}; l <= depth; ++l) {
            if ((k + l) % 2 == 0 and board[i + k - 1][j + l - 1] == '0') {
                return;
            }
            if ((k + l) % 2 == 1 and board[i + k - 1][j + l - 1] == '1') {
                return;
            }
        }
    }
    if (depth > result) {
        result = depth;
    }
    num[depth]++;
    dfs(i, j, (++depth));
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i{1}; i <= n; ++i) {
        cin >> board[i];
    }
    for (int i{1}; i <= n; ++i) {
        for (int j{n}; j >= 1; --j) {
            board[i][j] = board[i][j - 1];
        }
    }
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            dfs(i, j, 1);
        }
    }
    cout << result << " " << num[result] << endl;
    return 0;
}
