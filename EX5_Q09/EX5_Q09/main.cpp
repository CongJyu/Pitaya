//
//  main.cpp
//  EX5_Q09 贪心的阿迪
//
//  Created by cyrain on 2021/10/31.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n = 0, k = 0, m = 0, d = 0;
    cin >> n >> k >> m >> d;
    int d1 = 0, n1 = 0;
    int a[101] = {0};
    d1 = d;
    n1 = n;
    for (int i = 0; i < m; i++) {
        d = d1;
        n = n1;
        for (int j = 0; ; j++) {
            if (d < 0) {
                break;
            }
            n -= i * k;
            a[i - 1] += i;
            if (n < i) {
                break;
            }
            d--;
            if (n < i) {
                break;
            }
        }
    }
    sort(a, a + m);
    cout << a[m - 1] << endl;
    return 0;
}
