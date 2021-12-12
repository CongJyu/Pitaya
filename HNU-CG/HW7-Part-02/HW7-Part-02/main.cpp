//
//  main.cpp
//  HW7-Part-02 结构变量赋值
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

Person pr1;

int main() {
    cin >> pr1.name >> pr1.id >> pr1.salary;
    cout << pr1.name << " " << pr1.id << " " << pr1.salary << endl;
    return 0;
}
