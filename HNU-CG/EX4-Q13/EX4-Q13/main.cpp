//
//  main.cpp
//  EX4-Q13 除法的精确运算
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
int main() {
    using namespace std;
    int a, b, n;
    cin >> a >> b >> n;
    int c = 0;    //  c stand for counter
    if (a / b > 0) {
        cout << a / b << ".";
    } else {
        cout << 0 << ".";
    }
    do {
        a = a % b * 10;
        cout << a / b;
        c++;
    } while (c < n);
    cout << endl;
    return 0;
}
