// t05p06

#include <iostream>

using namespace std;

bool is_cat[100001], visited[100001];
int head[100001], nxt[100001 * 2], to[100000 * 2], n, m, cnt;

void dfs(int current_pos, int current_cat) {
    if (current_cat > m || visited[current_pos]) {
        return;
    }
    visited[current_pos] = true;
    if (nxt[head[current_pos]] == 0 && current_pos != 1) {
        cnt++;
        return;
    }
    for (int i = head[current_pos]; i != 0; i = nxt[i]) {
        if (is_cat[to[i]]) {
            dfs(to[i], current_cat + 1);
        } else {
            dfs(to[i], 0);
        }
    }
}

void insert(int source, int dest, int i) {
    nxt[i] = head[source];
    head[source] = i;
    to[i] = dest;
}

int main() {
    ios::sync_with_stdio(false);
    int tmp1 = 0, tmp2 = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> tmp1;
        is_cat[i] = (int) tmp1;
    }
    for (int i = 1; i <= n - 1; ++i) {
        cin >> tmp1 >> tmp2;
        insert(tmp1, tmp2, i * 2 - 1);
        insert(tmp2, tmp1, i * 2);
    }
    dfs(1, is_cat[1]);
    cout << cnt << endl;
    return 0;
}
