// t05p07

#include <iostream>
#include <cstring>

using namespace std;

int map[100][100];

int dijkstra(int n) {
    bool visited[101];
    int dist[101], maxDist = -1;
    memset(visited, false, sizeof(visited));
    memset(dist, 0x7f, sizeof(dist));
    dist[0] = 0;
    for (int i = 0; i < n; i++) {
        int u = 100;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < dist[u]) {
                u = j;
            }
        }
        if (u == 100) {
            break;
        }
        visited[u] = true;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[j] > map[u][j] + dist[u]) {
                dist[j] = map[u][j] + dist[u];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (dist[i] > maxDist) {
            maxDist = dist[i];
        }
    }
    return maxDist;
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0, source = 0, dest = 0, cost = 0;
    cin >> n;
    memset(map, 0x7f, sizeof(map));
    for (int i = 0; i < n - 1; ++i) {
        cin >> source >> dest >> cost;
        map[source][dest] = cost;
        map[dest][source] = cost;
    }
    cout << dijkstra(n) << endl;
    return 0;
}
