//
//  main.cpp
//  HW7-Part-06 结构体作为形参
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
using namespace std;

struct Person {
    char name[20];
    unsigned long id;
    float salary;
};

//  编写以结构体作为形参的函数，按指定格式打印数组结构体
Person print(Person personArr) {
    /* write */
    cout << personArr.name << " "
    << personArr.id << " "
    << personArr.salary << endl;
    return personArr;
}

Person allone[6] {
    {"jone", 12345, 339.0},
    {"david", 13916, 449.0},
    {"marit", 27519, 311.0},
    {"jasen", 42876, 623.0},
    {"peter", 23987, 400.0},
    {"yoke", 12335, 511.0}
};

int main() {
    //  循环调用print函数打印allone数组
    for (int i = 0; i < 6; i++) {
        print(allone[i]);
    }
    return 0;
}
