//
//  main.cpp
//  Open-Part-06 周老师吃小面包(递归)
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
using namespace std;
int eatBunMethods(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (n == 3) {
        return 4;
    }
    return eatBunMethods(n - 1) + eatBunMethods(n - 2) + eatBunMethods(n - 3);
}
int main() {
    int m = 0;
    cin >> m;
    int result = eatBunMethods(m);
    cout << result;
    return 0;
}
