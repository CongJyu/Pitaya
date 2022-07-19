// t02p11

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 1;
    cout << a[0] << " ";
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            cout << a[i] << " ";
            cnt++;
        }
        if (cnt == k) {
            break;
        }
    }
    return 0;
}
