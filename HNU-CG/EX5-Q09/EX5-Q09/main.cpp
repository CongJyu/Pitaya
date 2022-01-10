//
//  main.cpp
//  EX5-Q09 贪心的阿迪
//
//  Created by cyrain on 2021/10/31.
//

//#include <iostream>
//#include <algorithm>
//int main() {
//    using namespace std;
//    int n = 0, k = 0, m = 0, d = 0;
//    cin >> n >> k >> m >> d;
//    int d1 = 0, n1 = 0;
//    int a[101] = {0};
//    d1 = d;
//    n1 = n;
//    for (int i = 0; i < m; i++) {
//        d = d1;
//        n = n1;
//        for (int j = 0; ; j++) {
//            if (d < 0) {
//                break;
//            }
//            n -= i * k;
//            a[i - 1] += i;
//            if (n < i) {
//                break;
//            }
//            d--;
//            if (n < i) {
//                break;
//            }
//        }
//    }
//    sort(a, a + m);
//    cout << a[m - 1] << endl;
//    return 0;
//}

#include <iostream>
using namespace std;
int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int t;
    t = a[0] / (a[1] * a[3]);
    int max = t * a[3];
    for (int i = t + 1; i <= a[2]; i++) {
        int bear = 0, s = a[0];
        bear = bear + i;
        do {
            s = s - a[1] * i;
            if (s >= i) {
                bear = bear + i;
            }
        } while (s >= i);
        if (bear > max) {
            max = bear;
        }
    }
    cout << max;
    return 0;
}
