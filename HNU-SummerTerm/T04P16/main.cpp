// t04p16

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int *a = new int[n * (n - 1) / 2];
        for (int i = 0; i < n * (n - 1) / 2; ++i) {
            cin >> a[i];
        }
    }
    return 0;
}
