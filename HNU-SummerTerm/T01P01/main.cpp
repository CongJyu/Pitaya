// t01p01

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a = new int[n];
        int c[10001] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            c[a[i]]++;
        }
        int max = 0;
        int result = 0;
        for (int i = 0; i < 10001; ++i) {
            if (c[i] > max) {
                max = c[i];
                result = i;
            }
        }
        cout << result << endl;
        delete[] a;
    }
    return 0;
}
