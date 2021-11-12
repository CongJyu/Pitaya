//
//  main.cpp
//  EX5_Q02 小希的新工作
//
//  Created by cyrain on 2021/10/28.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, L = 0, a = 0;    //  客人的数量，每天工作的总时长，喝咖啡的时间
    cin >> n >> L >> a;
    int t[100] = {0}, l[100] = {0};    //  客人来到的时间，服务时间
    int coffee = 0;    //  喝咖啡的次数
    int delta = 0;    //  时间差
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> l[i];
    }
    for (int i = 0; i < n - 1; i++) {
        delta = t[i + 1] - (t[i] + l[i]);
        if (delta >= a) {
            coffee += delta / a;
        } else {
            coffee = coffee;
        }
    }
    if (t[n - 1] + l[n - 1] <= L) {
        delta = L - (t[n - 1] + l[n - 1]);
        if (delta >= a) {
            coffee += delta / a;
        } else {
            coffee = coffee;
        }
    }
    if (t[0] >= a) {
        coffee += t[0] / a;
    }
    cout << coffee << endl;
    return 0;
}
