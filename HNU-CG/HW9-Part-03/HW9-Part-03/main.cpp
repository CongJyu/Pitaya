//
//  main.cpp
//  HW9-Part-03 友元函数
//
//  Created by Rain Chen on 2021/12/23.
//

#include <iostream>

using namespace std;

class Complex {
private:
    double real, image;
public:
    Complex() {}
    Complex(double a, double b) {
        real = a;
        image = b;
    }
    void setRI(double a, double b) {
        real = a;
        image = b;
    }
    double getReal() {
        return real;
    }
    double getImage() {
        return image;
    }
    void print() {
        if (image > 0) {
            cout << "complex: " << real << "+" << image << "i" << endl;
        } else if (image < 0) {
            cout << "complex: " << real << image << "i" << endl;
        }
    }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.image = c1.image + c2.image;
    return c3;
}

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex c1(a, b), c2, c3;
    c2.setRI(c, d);
    c3 = add(c1, c2);
    cout << "c1:";
    c1.print();
    cout << "c2:";
    c2.print();
    cout << "c3:";
    c3.print();
    return 0;
}
