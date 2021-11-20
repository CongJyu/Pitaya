//
//  main.cpp
//  HW3-Q09 比n大的第一个素数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    int n;
    cin >> n;
    n = n + 1;
    int judge = 0, counter = 0;
    while (1) {
        for (int i = 2; i <= sqrt(n); i++) {
            judge = n % i;
            if (judge == 0) {
                counter++;
            } else {
                continue;
            }
        }
        if (counter == 0) {
            cout << n << endl;
            return 0;
        } else {
            counter = 0;
            n++;
        }
    }
    return 0;
}
