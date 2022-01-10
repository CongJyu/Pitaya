//
//  main.cpp
//  P_544 Tutorial 1.1 (Rectangle Class)
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;

class Rectangle {
public:
    void setLength(int x) {
        length = x;
    }
    void setWidth(int x) {
        width = x;
    }
    int returnArea() {
        return length * width;
    }
private:
    int length;
    int width;
};

int main() {
    int length, width;
    cin >> length >> width;
    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);
    cout << rect.returnArea() << endl;
    return 0;
}
