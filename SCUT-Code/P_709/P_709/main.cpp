//
//  main.cpp
//  P_709 简单加法
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;
int main() {
    int group = 0;
    cin >> group;
    for (int i = 0; i < group; i++) {
        int line = 0;
        cin >> line;
        int * in = new int [line];
        int sum = 0;
        for (int j = 0; j < line; j++) {
            cin >> in[j];
            sum += in[j];
        }
        cout << sum << endl;
    }
    return 0;
}
