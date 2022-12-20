//
//  main.cpp
//  HW10-Part-02 设计圆类，并以圆类为基类，派生圆柱类、圆锥类和圆球类（分别求出其面积和体积）
//
//  Created by Rain Chen on 2022/1/3.
//

#include <iostream>
#include <math.h>
using namespace std;

#define pi 3.1415926

class Area {
public:
    virtual double GetArea() = 0;
};

class Volume {
public:
    virtual double GetVolume() = 0;
};

class Circle : public Area {
public:
    double r;
    Circle(int x): r(x) {}
    double GetArea() {
        return pi * r * r;
    }
};

class Cylinder : public Circle, public Volume {
public:
    double h;
    Cylinder(double x, double y): Circle(x) {
        this -> h = y;
    }
    double GetArea() {
        return pi * r * r * 2 + r * pi * 2 * h;
    }
    double GetVolume() {
        return pi * r * r * h;
    }
};

class Cone : public Circle, public Volume {
public:
    double h;
    Cone(double x, double y): Circle(x), h(y) {}
    double GetArea() {
        double s;
        s = pi * r * r + pi * r * sqrt(r * r + h * h);
        return s;
    }
    double GetVolume() {
        return (pi * r * r * h) / 3.0;
    }
};

class Sphere : public Circle, public Volume {
public:
    Sphere(double x): Circle(x) {}
    double GetArea() {
        return 4 * (pi * r * r);
    }
    double GetVolume() {
        return 4 * (pi * r * r * r) / 3.0;
    }
};

int main() {
    Circle circle(2);
    cout << "创建一个圆对象" << endl;
    cout << "半径  ：2.0" << endl;
    cout << "面积  ：" << circle.GetArea() << endl << endl;
    
    Cylinder cylinder(2, 3);
    cout << "创建一个圆柱对象" << endl;
    cout << "半径  ：2.0" << endl;
    cout << "高度  ：3.0" << endl;
    cout << "面积  ：" << cylinder.GetArea() << endl;
    cout << "体积  ：" << cylinder.GetVolume() << endl << endl;
    
    Cone cone(2, 3);
    cout << "创建一个圆锥对象" << endl;
    cout << "半径  ：2.0" << endl;
    cout << "高度  ：3.0" << endl;
    cout << "面积  ：" << cone.GetArea() << endl;
    cout << "体积  ：" << cone.GetVolume() << endl << endl;

    Sphere sphere(2);
    cout << "创建一个球对象" << endl;
    cout << "半径  ：2.0" << endl;
    cout << "面积  ：" << sphere.GetArea() << endl;
    cout << "体积  ：" << sphere.GetVolume() << endl << endl;
    
    return 0;
}

