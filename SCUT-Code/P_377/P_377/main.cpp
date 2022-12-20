//
//  main.cpp
//  P_377 图书管理
//
//  Created by Rain Chen on 2022/3/10.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Book {
public:
    string name;
    double price;
    int number;
    void in(string n, double p, int num) {
        name = n;
        price = p;
        number = num;
    }
    void show() {
        cout << "bookname:" << name << " price:" << price << " number:"
        << number << " " << number - 1 << " " << number << endl;
    }
};

int main() {
    string name;
    double price;
    int number;
    Book inputbook;
    while (cin >> name >> price >> number) {
        inputbook.in(name, price, number);
        inputbook.show();
    }
    return 0;
}
