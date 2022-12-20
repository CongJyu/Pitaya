//
//  main.cpp
//  HW7-Q02 高风险人群统计
//
//  Created by Rain Chen on 2021/12/5.
//

#include <iostream>
using namespace std;
int main() {
    int xl = 0, yl = 0, xr = 0, yr = 0;
    cin >> xl >> yl >> xr >> yr;
    int num = 0;
    cin >> num;
    int * x = new int [num];
    int * y = new int [num];
    int cnt = 0;
    for (int i = 0; i < num; i++) {
        cin >> x[i] >> y[i];
        if (x[i] >= xl && x[i] <= xr && y[i] <= yl && y[i] >= yr) {
            cnt++;
        } else {
            continue;
        }
    }
    cout << cnt << endl;
    return 0;
}
