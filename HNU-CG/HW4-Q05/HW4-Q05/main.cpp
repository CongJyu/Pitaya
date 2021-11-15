//
//  main.cpp
//  HW4-Q05 求1!+2!+3!+...+n!
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    long long t, n = 1, sum = 0;
    cin >> t;
    for (long long i = 1; i <= t; i++) {
        n = n * i;
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
