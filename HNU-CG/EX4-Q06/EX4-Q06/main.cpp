//
//  main.cpp
//  EX4-Q06 桃子问题
//
//  Created by cyrain on 2021/10/21.
//

#include <iostream>
int main() {
    using namespace std;
    int n;
    cin >> n;    //  the number of days
    int x = 1;    //  the number of peaches
    for (int i = 0; i < (n - 1); i++) {
        x = (x + 1) * 2;
    }
    cout << x << endl;
    return 0;
}
