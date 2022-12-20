//
//  main.cpp
//  HW10-Part-03 实现Point类对象与整数加法,实现两个Point类对象的加法
//
//  Created by Rain Chen on 2022/1/3.
//

#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point() {
        x = y = 0;
    }
    Point(int x0, int y0) {
        x = x0;
        y = y0;
    }
    int GetX() {
        return x;
    }
    int GetY() {
        return y;
    }
    void Print() {
        cout << x << " " << y << " " << endl;
    }
    friend Point operator+(Point& pt, int dd);
    friend Point operator+(Point& pt1, Point& pt2);
};

Point operator+(Point& pt, int dd) {
    pt.x += dd;
    pt.y += dd;
    return pt;
}

Point operator+(Point& pt1, Point& pt2) {
    pt1.x += pt2.x;
    pt1.y += pt2.y;
    return pt1;
}

int main() {
    int qq1, qq2, qq3, qq4;
    cin >> qq1 >> qq2 >> qq3 >> qq4;
    Point a(qq1, qq2);
    Point b(qq3, qq4);
    Point c;
    c = a + b;
    c.Print();
    c = c + 2;
    c.Print();
    return 0;
}
