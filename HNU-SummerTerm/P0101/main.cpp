// p0101

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a{new int[n]};
        int num[10001]{0};
        for (int i{}; i < n; ++i) {
            cin >> a[i];
            num[a[i]]++;
        }
        int flag{}, m{};
        for (int i{1}; i < 10001; ++i) {
            if (num[i] > m) {
                m = num[i];
                flag = i;
            }
        }
        cout << flag << endl;
        delete[] a;
    }
    return 0;
}
