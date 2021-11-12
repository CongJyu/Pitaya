//
//  main.cpp
//  EX4_Q07 完美数
//
//  Created by cyrain on 2021/10/21.
//

#include <iostream>
int main() {
    using namespace std;
    int n;
    cin >> n;    //  the number is going to be judge
    int judge = 0, factor = 0;
    for (int i = 1; i < n; i++) {
        judge = n % i;
        if (judge == 0) {
            factor = factor + i;
        } else {
            continue;
        }
    }
    if (factor == n) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
