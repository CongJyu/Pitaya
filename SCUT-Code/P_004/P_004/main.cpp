//
//  main.cpp
//  P_004 三角形面积
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

double solve(double ax, double ay, double bx, double by, double cx, double cy) {
    double ans = 0;
    // solve it!
    double p, a, b, c;
    a = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    b = sqrt((bx - cx) * (bx - cx) + (by - cy) * (by - cy));
    c = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
    p = (a + b + c) * 0.5;
    ans = sqrt(p * (p - a) * (p - b) * (p - c));
    return ans;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << solve(x1, y1, x2, y2, x3, y3) << endl;
    return 0;
}
