// p0505

#include <iostream>
#include <iomanip>

using namespace std;

bool visited[100001];
int head[100001], nxt[100001], to[100001], n, sons[100001];
double expectation;

void dfs(int current_pos, double possibility, int depth) {
    if (visited[current_pos]) {
        return;
    }
    if (sons[current_pos] == 0) {
        expectation += possibility * depth;
        return;
    }
    visited[current_pos] = true;
    double son_possibility{possibility / sons[current_pos]};
    for (int i{head[current_pos]}; i != 0; i = nxt[i]) {
        dfs(to[i], son_possibility, depth + 1);
    }
}

void insert(int source, int dest, int i) {
    nxt[i] = head[source];
    to[i] = dest;
    head[source] = i;
    sons[source]++;
    sons[dest]++;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    int temp_source{}, temp_dest{};
    for (int i{}; i < n - 1; ++i) {
        cin >> temp_source >> temp_dest;
        insert(temp_source, temp_dest, i * 2 + 1);
        insert(temp_dest, temp_source, i * 2 + 2);
    }
    sons[1] /= 2;
    for (int i{2}; i <= n; ++i) {
        sons[i] = sons[i] / 2 - 1;
    }
    dfs(1, 1.0, 0);
    cout << fixed << setprecision(7);
    cout << expectation << endl;
    return 0;
}
