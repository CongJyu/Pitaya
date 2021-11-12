//
//  main.cpp
//  EX5_Q10 飞机起飞时间安排
//
//  Created by cyrain on 2021/10/31.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, s = 0;
    cin >> n >> s;
//  着陆的航班数量 与 着陆与起飞之间的最小允许距离
    int h = 0, m = 0;
    int time[100] = {0};
//  飞机的着陆时间 小时 分钟
    for (int i = 0; i < n; i++) {
        cin >> h >> m;
        time[i] = h * 60 + m;
    }
    int timeoff = 0, delta = 0;
    for (int i = 0; i < n - 1; i++) {
        delta = time[i + 1] - time[i];
        if (delta >= (s + 2) * 2) {
            timeoff = time[i] + s + 1;
            break;
        }
    }
    cout << timeoff / 60 << " " << timeoff % 60 << endl;
    return 0;
}
