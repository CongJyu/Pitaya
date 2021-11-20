//
//  main.cpp
//  EX4-Q10 小熊与糖果
//
//  Created by cyrain on 2021/10/22.
//

#include <iostream>
int main() {
    using namespace std;
    int t;    //  T 组数据
    int a, b;    //  Limak 和 Bob 最多能吃的糖果数
    int lm, bo;
    int rd;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        lm = 0;
        bo = 0;
        rd = 1;
        cin >> a >> b;
        do {
            if (rd == 1) {
                lm = 1;
            } else {
                if (rd % 2 == 0) {
                    bo = bo + rd;
                } else {
                    lm = lm + rd;
                }
            }
            rd++;
        } while (lm <= a && bo <= b);
        if (lm > a) {
            cout << "Bob" << endl;
        } else {
            cout << "Limak" << endl;
        }
    }
    return 0;
}
