// t04p12

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int a = 1, b, k;
    for (int i = 1; i <= n; ++i) {
        b = a;
        a += i;
        k = i + 1;
        for (int j = i; j <= n; ++j) {
            if (j == n) {
                cout << b << endl;
            } else {
                cout << b << " ";
            }
            b += k;
            ++k;
        }
    }
    return 0;
}
