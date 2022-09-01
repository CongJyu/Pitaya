// p0507

#include <iostream>
#include <cstring>

using namespace std;

int mp[100][100];

int dijkstra(int n) {
    bool visited[101];
    int dist[101], max_dist{-1};
    memset(visited, false, sizeof(visited));
    memset(dist, 0x7f, sizeof(dist));
    dist[0] = 0;
    for (int i{}; i < n; ++i) {
        int u{100};
        for (int j{}; j < n; ++j) {
            if (!visited[j] and dist[j] < dist[u]) {
                u = j;
            }
        }
        if (u == 100) {
            break;
        }
        visited[u] = true;
        for (int j{}; j < n; ++j) {
            if (!visited[j] and dist[j] > mp[u][j] + dist[u]) {
                dist[j] = mp[u][j] + dist[u];
            }
        }
    }
    for (int i{}; i < n; ++i) {
        if (dist[i] > max_dist) {
            max_dist = dist[i];
        }
    }
    return max_dist;
}

int main() {
    ios::sync_with_stdio(false);
    int n{}, source{}, dest{}, cost{};
    cin >> n;
    memset(mp, 0x7f, sizeof(mp));
    for (int i{}; i < n - 1; ++i) {
        cin >> source >> dest >> cost;
        mp[source][dest] = cost;
        mp[dest][source] = cost;
    }
    cout << dijkstra(n) << endl;
    return 0;
}
