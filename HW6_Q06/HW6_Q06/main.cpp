//
//  main.cpp
//  HW6_Q06 字符串长度
//
//  Created by cyrain on 2021/11/6.
//

#include <iostream>
#include <cstring>
using namespace std;
char in[50];
int cnt();
int main() {
    cin.get(in, 50).get();
    cout << cnt() << endl;
    return 0;
}
int cnt() {
    int cnt = 0;
    for (int i = 0; i < 50; i++) {
        if (in[i] == '\0') {
            break;
        } else {
            cnt++;
        }
    }
    return cnt;
}
