// p0502

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const long long INF{0x3f3f3f3f3f3f3f3f};
long long int start_to_end_cost{};
bool visited[2001][2001]{false};
int map[2001][2001], n{}, m{}, w{};

struct Point {
    int x, y;
    long long dist;

    Point(const int curr_x, const int curr_y, const long long distance) :
            x(curr_x), y(curr_y), dist(distance) {}

    Point() = default;
};

long long bfs(const int &start_x, const int start_y) {
    memset(visited, false, sizeof(visited));
    queue<Point> visit_queue;
    Point();
    long long min_portal_cost, portal_cost;
    min_portal_cost = INF;
    visit_queue.emplace(Point(start_x, start_y, 0));
    while (!visit_queue.empty()) {
        Point curr{visit_queue.front()};
        visit_queue.pop();
        if (visited[curr.x][curr.y] or map[curr.x][curr.y] == -1) {
            continue;
        }
        visited[curr.x][curr.y] = true;
        if ((curr.x == n and curr.y == m and start_x == 1 and start_y == 1) or
            (curr.x == 1 and curr.y == 1 and start_x == n and start_y == m)) {
            start_to_end_cost = curr.dist;
        }
        if (map[curr.x][curr.y] > 0) {
            portal_cost = curr.dist + map[curr.x][curr.y];
            min_portal_cost = min_portal_cost > portal_cost ? portal_cost : min_portal_cost;
        }
        if (curr.x > 1) {
            visit_queue.emplace(curr.x - 1, curr.y, curr.dist + w);
        }
        if (curr.x < n) {
            visit_queue.emplace(Point(curr.x + 1, curr.y, curr.dist + w));
        }
        if (curr.y > 1) {
            visit_queue.emplace(Point(curr.x, curr.y - 1, curr.dist + w));
        }
        if (curr.y < m) {
            visit_queue.emplace(Point(curr.x, curr.y + 1, curr.dist + w));
        }
    }
    return min_portal_cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> w;
    long long start_nearest_cost, end_nearest_cost, portal_cost;
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            cin >> map[i][j];
        }
    }
    if (map[1][1] == -1 or map[n][m] == -1) {
        cout << -1 << endl;
        return 0;
    }
    start_nearest_cost = INF;
    start_to_end_cost = start_nearest_cost;
    start_nearest_cost = bfs(1, 1);
    end_nearest_cost = bfs(n, m);
    portal_cost = start_nearest_cost + end_nearest_cost;
    if (portal_cost < start_to_end_cost) {
        cout << portal_cost << endl;
    } else {
        if (start_to_end_cost != INF) {
            cout << start_to_end_cost << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
