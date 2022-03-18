//
//  main.cpp
//  P_378 计算盒子体积
//
//  Created by Rain Chen on 2022/3/11.
//

#include <iostream>

using namespace std;

int main() {
    double length = 0, width = 0, height = 0;
    while (cin >> length >> width >> height) {
        double vol = length * width * height;
        cout << vol << endl;
    }
    return 0;
}
