//
//  main.cpp
//  EX5_Q01 快速公交BRT
//
//  Created by cyrain on 2021/10/28.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, g = 0, r = 0;    //  红绿灯数，绿灯时间，红灯时间
    int l[100] = {0};    //  公交车通过第i个路段的时间
    int q = 0;    // 从起点出发的公交车数量
    int out[100] = {0};    //  每辆公交车离开起点的时间
    cin >> n >> g >> r;
    for (int i = 0; i < n + 1; i++) {
        cin >> l[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> out[i];
        for (int j = 0; j < n; j++) {
            out[i] += l[j];
            if ((out[i]) % (g + r) >= g) {
                out[i] = (out[i] / (g + r) + 1) * (g + r);
            }
        }
    }
//    int time[100] = {0};    //  每辆公交车到达终点的时间
    for (int i = 0; i < q; i++) {
        cout << out[i] + l[n] << " ";
    }
    cout << endl;
    return 0;
}
