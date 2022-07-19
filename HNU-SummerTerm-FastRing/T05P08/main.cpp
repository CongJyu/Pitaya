// t05p08

#include <iostream>
#include <cstring>

using namespace std;

bool un_respected_by_all[100001], un_respected_parent[100001];

int main() {
    int n = 0, parent = 0, respect = 0, i;
    bool printed = false;
    memset(un_respected_by_all, 1, sizeof(un_respected_by_all));
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> parent >> respect;
        if (parent != -1) {
            un_respected_by_all[parent] &= respect;
            un_respected_parent[i] = respect;
        }
    }
    for (i = 1; i <= n; ++i) {
        if (un_respected_parent[i] && un_respected_by_all[i]) {
            cout << i << " ";
            printed = true;
        }
    }
    if (!printed) {
        cout << -1 << endl;
    }
    return 0;
}
