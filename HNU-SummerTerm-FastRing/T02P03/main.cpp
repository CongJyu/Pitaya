// t02p03

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int max_num = b[n - 1];
    int min_num = b[0];
    int delta = 99999999;
    int flag = 0;
    for (int i = 0; i < n; ++i) {
        int temp = abs(abs(a[i] - max_num) - abs(a[i] - min_num));
        if (delta > temp) {
            delta = temp;
            flag = a[i];
        } else if (delta == temp) {
            if (flag > a[i]) {
                flag = a[i];
            }
        }
    }
    cout << flag << endl;
    delete[] a;
    delete[] b;
    return 0;
}
