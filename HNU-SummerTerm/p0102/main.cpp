// p0102

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int *cnt{new int[m]};
    char **key{new char *[n]};
    for (int i{}; i < n; ++i) {
        key[i] = new char[m];
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> key[i][j];
            if (key[i][j] == '1') {
                cnt[j]++;
            }
        }
    }
    return 0;
}
