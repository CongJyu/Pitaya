// t05p02

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;
const long long INF = 0x3f3f3f3f3f3f3f3f;
long long int startToEndCost;
bool visited[2001][2001] = {false};
int map[2001][2001], n, m, w;

struct Point {
    int x, y;
    long long dist;

    Point(const int currx, const int curry, const long long distance) : x(currx), y(curry), dist(distance) {}

    Point() = default;
};

long long bfs(const int &startX, const int &startY) {
    memset(visited, false, sizeof(visited));
    queue<Point> visitQueue;
    Point();
    long long minPortalCost, portalCost;
    minPortalCost = INF;
    visitQueue.emplace(Point(startX, startY, 0));
    while (!visitQueue.empty()) {
        Point curr = visitQueue.front();
        visitQueue.pop();
        if (visited[curr.x][curr.y] || map[curr.x][curr.y] == -1) {
            continue;
        }
        visited[curr.x][curr.y] = true;
        if ((curr.x == n && curr.y == m && startX == 1 && startY == 1) ||
            (curr.x == 1 && curr.y == 1 && startX == n && startY == m)) {
            startToEndCost = curr.dist;
        }
        if (map[curr.x][curr.y] > 0) {
            portalCost = curr.dist + map[curr.x][curr.y];
            minPortalCost = minPortalCost > portalCost ? portalCost : minPortalCost;
        }
        if (curr.x > 1) {
            visitQueue.emplace(Point(curr.x - 1, curr.y, curr.dist + w));
        }
        if (curr.x < n) {
            visitQueue.emplace(Point(curr.x + 1, curr.y, curr.dist + w));
        }
        if (curr.y > 1) {
            visitQueue.emplace(Point(curr.x, curr.y - 1, curr.dist + w));
        }
        if (curr.y < m) {
            visitQueue.emplace(Point(curr.x, curr.y + 1, curr.dist + w));
        }
    }
    return minPortalCost;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> w;
    long long int startNearestCost, endNearestCost, portalCost;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }
    if (map[1][1] == -1 || map[n][m] == -1) {
        cout << -1 << endl;
        return 0;
    }
    startToEndCost = startNearestCost = INF;
    startNearestCost = bfs(1, 1);
    endNearestCost = bfs(n, m);
    portalCost = startNearestCost + endNearestCost;
    if (portalCost < startToEndCost) {
        cout << portalCost << endl;
    } else {
        if (startToEndCost != INF) {
            cout << startToEndCost;
        } else {
            cout << -1;
        }
    }
    return 0;
}
