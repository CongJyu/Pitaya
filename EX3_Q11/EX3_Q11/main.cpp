//
//  main.cpp
//  EX3_Q11  Something wrong
//
//  Created by cyrain on 2021/10/10.
//

#include <iostream>
using namespace std;
int main() {
    int sum[3] = {0};
    for (int i = 0; i < 3; i++) {
        int sal, dis;
        char hol;
        cin >> sal >> hol >> dis;
        sum[i] = sal / 5000 * 100;
        if (hol == 'y') {
            sum[i] = sum[i] + 20;
        }
        if (dis < 2000) {
            sum[i] = sum[i] + 100;
        } else {
            dis = (dis - 2000) / 200;
            if (100 - 10 * dis > 0) {
                sum[i] += 100 - 10 * dis;
            }
        }
    }
    if (sum[0] >= sum[1] && sum[0] >= sum[2]) {
        cout << "A" << endl;
    } else if (sum[1] >= sum[0] && sum[1] >= sum[2]) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
    return 0;
}
