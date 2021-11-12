//
//  main.cpp
//  HW6_Q01 统计数字
//
//  Created by cyrain on 2021/11/6.
//

#include <iostream>
using namespace std;
char s[31];
int n = 0;
int cnt = 0;
int main() {
    cin >> s;
    cin >> n;
    n += 48;
    for (int i = 0; i < 31; i++) {
        if ((char)n == s[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int count(long long, long long);
//int main() {
//    long long number = 0;
//    long long x = 0;
//    cin >> number >> x;
//    count(number, x);
//    return 0;
//}
//int count(long long a, long long b) {
//    int cnt = 0;
//    while (true) {
//        if (a % 10 == b) {
//            cnt++;
//            a = a / 10;
//        } else if (a == 0) {
//            cout << cnt << endl;
//            return 0;
//        } else {
//            a = a / 10;
//        }
//    }
//}
