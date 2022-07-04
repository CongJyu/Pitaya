// 实验六

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const int N = 2000;
int n, m, S, T;
double g[N][N];
double dist[N];
bool st[N];

void dijkstra() {
    dist[S] = 1;
    for (int i = 0; i <= n; ++i) {
        int t = -1;
        for (int j = 1; j <= n; ++j) {
            if (!st[j] && (t == -1 || dist[t] < dist[j])) {
                t = j;
            }
        }
        if (t == T) {
            return;
        }
        st[t] = true;
        for (int j = 1; j <= n; ++j) {
            if (!st[j] && dist[j] < dist[t] * g[t][j]) {
                dist[j] = dist[t] * g[t][j];
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        double z = (100.0 - c) / 100;
        g[b][a] = max(g[a][b], z);
        g[a][b] = g[b][a];
    }
    cin >> S >> T;
    dijkstra();
    cout << fixed << setprecision(8);
    cout << floor((100.0 / dist[T]) * 100000000) / 100000000 << endl;
    return 0;
}
