// h03p06

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    if (x != y) {
        return x > y;
    } else {
        return x < y;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int a[4] = {0};
    for (int &i: a) {
        cin >> i;
    }
    sort(a, a + 4, cmp);
    for (int i: a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
