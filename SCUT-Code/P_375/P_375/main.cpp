//
//  main.cpp
//  P_375 计算长方体表面积
//
//  Created by Rain Chen on 2022/3/10.
//

#include <iostream>

using namespace std;

class Rect {
private:
    int length = 0;
    int width = 0;
    int height = 0;
public:
    Rect() {}
    Rect(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    };
    int area() {
        return 2 * (length * width + length * height + width * height);
    }
};

int main() {
    int l = 0, w = 0, h = 0;
    while (cin >> l >> w >> h) {
        Rect solve(l, w, h);
        cout << solve.area() << endl;
    }
    return 0;
}
