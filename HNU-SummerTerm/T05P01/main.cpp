// t05p01
// something wrong

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int graph[10000][10000];

bool great(const vector<int> &a, vector<int> b, int n) {
    b.push_back(n);
    int minLen = a.size() < b.size() ? (int) a.size() : (int) b.size();
    for (int i = 0; i < minLen; ++i) {
        if (a[i] != b[i]) {
            return a[i] > b[i];
        }
    }
    return false;
}

void dijkstra(int source, int n) {
    int *dist = new int[n + 1], mark[n + 1];
    vector<int> route_str[n];
    for (int i = 0; i < n + 1; ++i) {
        dist[i] = (1 << 30) - 1;
        mark[i] = 0;
    }
    route_str[0].push_back(1);
    dist[source] = 0;
    int v;
    for (int i = 0; i < n; ++i) {
        v = n;
        for (int j = 0; j < n; j++) {
            if (mark[j] == 0 && dist[j] < dist[v]) {
                v = j;
            }
        }
        mark[v] = 1;
        for (int j = 0; j < n; j++) {
            if (((dist[j] == dist[v] + graph[v][j]) && great(route_str[j], route_str[v], j + 1)) ||
                dist[j] > dist[v] + graph[v][j]) {
                dist[j] = dist[v] + graph[v][j];
                route_str[j] = route_str[v];
                route_str[j].push_back(j + 1);
            }
        }
    }
    if (dist[n - 1] == (1 << 30) - 1) {
        cout << -1 << endl;
        return;
    }
    for (int &i: route_str[n - 1]) {
        cout << i << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            graph[i][j] = (1 << 30) - 1;
        }
        graph[i][i] = 0;
    }
    int s = 1;
    int source = 0, de = 0, weight = 0;
    for (int i = 0; i < m; ++i) {
        cin >> source >> de >> weight;
        if (graph[source - 1][de - 1] > weight) {
            graph[source - 1][de - 1] = weight;
            graph[de - 1][source - 1] = weight;
        }
    }
    dijkstra(s - 1, n);
    return 0;
}
