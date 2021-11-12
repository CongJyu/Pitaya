//
//  main.cpp
//  EX5_Q14 基于神经网络的垃圾邮件分类
//
//  Created by cyrain on 2021/11/1.
//

#include <iostream>
int main() {
    using namespace std;
    int ntest;
    cin >> ntest;
    for (int i = 0; i < ntest; i++) {
        int N, min, max;
        cin >> N >> min >> max;
        int arr[N][2];
        for (int j = 0; j < N; j++) {
            cin >> arr[j][0] >> arr[j][1];
        }
        int res[11];
        int total_10 = 0;
        for (int j = 1; j <= 10; j++) {
            int tmp = j;
            int output = j;
            for (int k = 0; k < N; k++) {
                output = output * arr[k][0] + arr[k][1];
            }
            if (output % 2 == 0) {
                res[tmp] = 0;
            } else {
                res[tmp] = 1;
            }
            total_10 += res[tmp];
        }
        int max_mod = 10 - max % 10;
        int min_mod = min % 10;
        int result = 0;
        for (int j = max % 10 + 1; j <= 10; j++) {
            result -= res[j];
        }
        for (int j = min % 10 - 1; j >= 1; j--) {
            result -= res[j];
        }
        result += ((max + max_mod - min + min_mod + 1) / 10) * total_10;
        cout << max - min + 1 - result << " " << result << endl;
    }
    return 0;
}
