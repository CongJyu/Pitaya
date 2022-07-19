// t01p02

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int n, m, flag, i, j;
    char x[2010];
    int a[20][20];
    int sum[2010];
    memset(a, 0, sizeof(a));
    memset(sum, 0, sizeof(sum));
    cin >> n >> m;
    getchar();
    for (i = 1; i <= n; i++) {
        cin.getline(x, 2010);
        // gets(x);
        for (j = 1; j <= m; j++) {
            a[i][j] = x[j - 1] - '0';
            if (a[i][j] == 1) {
                sum[j]++;
            }
        }
    }
    flag = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (sum[j] - a[i][j] == 0) {
                break;
            }
        }
        if (j == m + 1) {
            flag = 1;
        }
    }
    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
