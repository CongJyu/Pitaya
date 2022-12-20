//
//  main.cpp
//  P_727 琪露诺的完美算术教室
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    long long i = 1, j = 1;
    while (a > i) {
        i *= 3;
    }
    i /= 3;
    
    while (b > j) {
        j *= 3;
    }
    
}
