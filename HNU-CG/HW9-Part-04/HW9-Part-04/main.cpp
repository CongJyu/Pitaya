//
//  main.cpp
//  HW9-Part-04 “点”类的实现
//
//  Created by Rain Chen on 2021/12/23.
//  something wrong

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point();
    void setPoint(int, int);
    int getX();
    int getY();
    double myDistance(int, int);
};

Point::Point() {}

void Point::setPoint(int x1, int y1) {
    x = x1;
    y = y1;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

double Point::myDistance(int x1, int y1) {
    double u = sqrt(x1 * x1 + y1 * y1);
    return u;
}

int main() {
    Point A, B;
    double distance;
    float s, d;
    cin >> s >> d;
    A.setPoint(s, d);
    cin >> s >> d;
    B.setPoint(s, d);
    s = A.getX() - B.getX();
    d = A.getX() - B.getY();
    distance = A.myDistance(s, d);
    cout << fixed << setprecision(3) << distance << endl;
    return 0;
}
