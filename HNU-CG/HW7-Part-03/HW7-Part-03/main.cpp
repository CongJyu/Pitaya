//
//  main.cpp
//  HW7-Part-03 通过结构指针访问结构成员
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Person {
    char name[20];
    unsigned long id;
    float salary;
};

int main() {
    Person pr1;
    Person * prPtr = &pr1;
    cin >> pr1.name;
    strcpy(prPtr -> name, pr1.name);
    cin >> prPtr -> id;
    cin >> prPtr -> salary;
    cout << prPtr -> name << " " << prPtr -> id << " " << prPtr -> salary << endl;
    return 0;
}
