//
//  main.cpp
//  HW9-Q01
//
//  Created by Rain Chen on 2021/12/20.
//

#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
private:
    double length;
    double width;
    double s;
    double c;
    double diag;
public:
    Rectangle();
    ~Rectangle();
    void sIs(double, double);
    void cIs(double, double);
    void diagIs(double, double);
    void sqrIs(double, double);
};

int main() {
    double length = 0.0, width = 0.0;
    cin >> length >> width;
    cout << "length = " << length << "," << "width = " << width << endl;
    Rectangle rtg;
    rtg.cIs(length, width);
    rtg.sIs(length, width);
    rtg.diagIs(length, width);
    rtg.sqrIs(length, width);
    return 0;
}

void Rectangle::sIs(double l, double w) {
    s = l * w;
    cout << "S = " << s << endl;
    return;
}

void Rectangle::cIs(double l, double w) {
    c = (l + w) * 2;
    cout << "C = " << c << endl;
    return;
}

void Rectangle::diagIs(double l, double w) {
    diag = sqrt(l * l + w * w);
    cout << "The diagonal length = " << diag << endl;
    return;
}

void Rectangle::sqrIs(double l, double w) {
    if (l == w) {
        cout << "Is square ? Yes" << endl;
    } else {
        cout << "Is square ? No" << endl;
    }
    return;
}

Rectangle::Rectangle() {
    ;
}

Rectangle::~Rectangle() {
    ;
}
