// t04p04

#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int disorder = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[i] > a[j]) {
                    disorder++;
                }
            }
        }
        cout << disorder << endl;
    }
    return 0;
}
