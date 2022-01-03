//
//  main.cpp 新型冠状病毒（COVID19）传播
//  2021Test-Q01
//
//  Created by Rain Chen on 2022/1/1.
//

//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct Runner {
//    long long num;
//    long long p;
//    long long v;
//};
//bool cmp(const Runner &l, const Runner &r) {
//    if (l.p == r.p) {
//        return l.v > r.v;
//    }
//    return l.p < r.p;
//}
//int main() {
//    long long n = 0, k = 0;
//    cin >> n >> k;
//    Runner * run = new Runner [n];
//    for (long long i = 0; i < n; i++) {
//        run[i].num = i + 1;
//        cin >> run[i].p;
//    }
//    for (long long i = 0; i < n; i++) {
//        cin >> run[i].v;
//    }
//    sort(run, run + n, cmp);
//    long long l_max_v = -1;
//    long long zero;
//    for (zero = 0; zero < n; zero++) {
//        if (run[zero].v > l_max_v) {
//            l_max_v = run[zero].v;
//        }
//        if (run[zero].num == k) {
//            break;
//        }
//    }
//    long long safe = 0;
//    long long r_min_v = 1e7;
//    for (long long i = zero; i < n; i++) {
//        if (run[i].v >= l_max_v && run[i].p > run[zero].p) {
//            safe++;
//        }
//        if (run[i].v <= r_min_v) {
//            r_min_v = run[zero].v;
//        }
//    }
//    for (long long i = 0; i < zero; i++) {
//        if (run[i].v <= r_min_v && run[i].p < run[zero].p) {
//            safe++;
//        }
//    }
//    delete [] run;
//    cout << n - safe << endl;
//    return 0;
//}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

ll max_v = 0;
ll min_v = 1e7 + 10;

const ll MAXSIZE = 1e7 + 10;

ll s[MAXSIZE];
ll v[MAXSIZE];

int main() {
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if ((s[i] < s[k] && v[i] > v[k]) || (s[i] > s[k] && v[i] < v[k])) {
            max_v = max(max_v, v[i]);
            min_v = min(min_v, v[i]);
        }
        if (s[i] == s[k]) {
            ans++;
            max_v = max(max_v, v[i]);
            min_v = min(min_v, v[i]);
        }
    }
    for (ll i = 0; i < n; i++) {
        if ((s[i] < s[k] && v[i] > min_v) || (s[i] > s[k] && v[i] < max_v)) {
            ans++;
        }
    }
    cout << ans - 1 << endl;
    return 0;
}
