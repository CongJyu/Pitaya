//
//  main.cpp
//  HW10-Part-04 求两个三角形面积和
//
//  Created by Rain Chen on 2022/1/3.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class Triangle {
public:
    Triangle(double s1 = 0, double s2 = 0, double s3 = 0,double area = 0) {
        m_s1 = s1;
        m_s2 = s2;
        m_s3 = s3;
        m_area = area;
    }
    double getS1() {
        return m_s1;
    }
    double getS2() {
        return m_s2;
    }
    double getS3() {
        return m_s3;
    }
    double getArea() {
        return m_area;
    }
    Triangle operator+(Triangle triangle);
private:
    double m_s1;
    double m_s2;
    double m_s3;
    double m_area;
};

Triangle Triangle::operator+(Triangle triangle) {
    double p1 = (this -> m_s1 + this -> m_s2 + this -> m_s3) * 0.5;
    double s1 = sqrt(p1 * (p1 - this -> m_s1) * (p1 - this -> m_s2) * (p1 - this -> m_s3));
    double p2 = (triangle.m_s1 + triangle.m_s2 + triangle.m_s3) * 0.5;
    double s2 = sqrt(p2 * (p2 - triangle.m_s1) * (p2 - triangle.m_s2) * (p2 - triangle.m_s3));
    this -> m_area = s1 + s2;
    return * this;
}

int main() {
    int t11, t12, t13, t21, t22, t23;
    cin >> t11 >> t12 >> t13;
    cin >> t21 >> t22 >> t23;
    Triangle c1(t11, t12, t13), c2(t21, t22, t23), c3;
    c3 = c1 + c2;
    cout << c3.getArea() << endl;
    return 0;
}
