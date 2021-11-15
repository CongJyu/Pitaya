//
//  main.cpp
//  EX5_Q06 松雅的花园
//
//  Created by cyrain on 2021/10/30.
//

#include <iostream>
//#include <algorithm>
//int main() {
//    using namespace std;
//    int g = 0;
//    cin >> g;    //  测试数据组数
//    int n = 0, k = 0;    //  苗圃数和水龙头数
//    int ps[100] = {0};
//    int time = 0;
//    int dis[100];
//    for (int i = 0; i < g; i++) {
//        cin >> n >> k;
//        for (int i = 0; i < k; i++) {
//            cin >> ps[i];
//        }
//        for (int i = 0; i < k - 1; i++) {
//            dis[i] = ps[i + 1] - ps[i];
//        }
//        sort(dis, dis + 100);
//        if (dis[99] % 2 == 0) {
//            if (dis[99] / 2 < ps[0]) {
//                time = ps[0];
//            }
//            if (time < n - ps[k - 1]) {
//                time = n - ps[k - 1];
//            }
//        } else {
//            if (dis[99] / 2.0 < ps[0]) {
//                time = ps[0];
//            }
//            if (time < n - ps[k - 1]) {
//                time = n - ps[k - 1];
//            }
//        }
//        cout << time << endl;
//    }
//    return 0;
//}

int main() {
    using namespace std;
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n, k, a, b;
        cin >> n >> k;
        int time = 0;
        cin >> a;
        time = a;
        b = a;
        int first = 0;
        for (int j = 1; j < k; j++) {
            cin >> b;
            if (j == 1) {
                first = a - 0;
            }
            if (((b - a + 1) % 2 == 0) && ((b - a + 1) / 2 > time)) {
                time = (b - a + 1) / 2;
            } else if (((b - a + 1) % 2 != 0) && ((b - a + 1) / 2 > time)) {
                time = (b - a + 2) / 2;
            }
            a = b;
        }
        if (n - b + 1 > time) {
            time = n - b + 1;
        }
        if (first > time) {
            time = first;
        }
        cout << time << endl;
    }
    return 0;
}

