// ccf-csp 201403-4

/*
 * 有条件的 bfs 遍历
 * 走有放置路由器的点
 * 半径在 r 之内
 */

#include <iostream>
#include <queue>

using namespace std;

const int N{20000};

struct Node {
    long long x, y;  // 坐标
    int cross;
};

Node mp[N];
queue<Node> q;
long long n, m, k, r;
bool visited[N];

int bfs() {
    visited[1] = true;
    q.push({mp[1].x, mp[1].y, 0});
    while (!q.empty()) {
        Node current{q.front()};
        q.pop();
        if (current.x == mp[2].x and current.y == mp[2].y) {
            return current.cross - 1;
        }
        for (int i{1}; i <= n + m; ++i) {
            if (visited[i]) {
                continue;
            }
            if ((mp[i].x - current.x) * (mp[i].x - current.x) + (mp[i].y - current.y) * (mp[i].y - current.y) > r * r) {
                continue;
            }
            visited[i] = true;
            q.push({mp[i].x, mp[i].y, current.cross + 1});
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> k >> r;
    for (int i{1}; i <= n + m; ++i) {
        cin >> mp[i].x >> mp[i].y;
    }
    int ans{bfs()};
    cout << ans << endl;
    return 0;
}
