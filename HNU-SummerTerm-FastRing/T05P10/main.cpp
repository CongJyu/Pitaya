// t05p10
// from CodeForces 682C

#include <iostream>

using namespace std;

int head[100001], nxt[100000], to[100000], val[100001], weight[100000];  // nxt stands for next, abbr because std.
int n, preserveCount;

void dfs(int currPos, int dist) {
    if (dist > val[currPos]) {
        return;
    }
    preserveCount++;
    for (int i = head[currPos]; i != 0; i = nxt[i]) {
        if (dist > 0) {
            dfs(to[i], dist + weight[i]);
        } else {
            dfs(to[i], weight[i]);
        }
    }
}

void insert(const int &source, const int &dest, const int &wt) {
    nxt[dest - 1] = head[source];
    head[source] = dest - 1;
    to[dest - 1] = dest;
    weight[dest - 1] = wt;
}

int main() {
    ios::sync_with_stdio(false);
    int parent_tmp, weight_tmp;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> val[i];
    }
    for (int i = 1; i < n; ++i) {
        cin >> parent_tmp >> weight_tmp;
        insert(parent_tmp, i + 1, weight_tmp);
    }
    dfs(1, 0);
    cout << n - preserveCount << endl;
    return 0;
}
