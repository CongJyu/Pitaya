// p0211

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, k{};
    cin >> n >> k;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt{1}, tmp{a[0]};
    cout << a[0];
    for (int i{}; i < n; ++i) {
        if (a[i] != tmp) {
            cout << " " << a[i];
            tmp = a[i];
            cnt++;
            if (cnt == k) {
                break;
            }
        }
    }
    cout << endl;
    delete[] a;
    return 0;
}
