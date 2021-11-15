//
//  main.cpp
//  EX5-Q05 阿迪看医生
//
//  Created by cyrain on 2021/10/30.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;    //  医生的数量
    int s[100] = {0};    //  第s天看病
    int d[100] = {0};    //  隔d天看病
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> d[i];
    }
    int days = 0;    //  看完病的天数
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] + j * d[i] > days) {
                days = s[i] + j * d[i];
                break;
            }
        }
    }
    cout << days << endl;
    return 0;
}

