//
//  main.cpp
//  P_548 Tutorial 1.5 (Student Class)
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student {
public:
    Student(string f, string l, int i, int s) {
        if (i < 0) {
            i = 0;
        }
        if (s < 0) {
            s = 0;
        }
        firstname = f;
        lastname = l;
        id = i;
        scholarship = s;
    }
    void showInfo() {
        cout << firstname << " " << lastname << endl;
        cout << id << " " << scholarship << endl;
    }
    void raise() {
        cout << int(scholarship * 1.10) << endl;
    }
private:
    string firstname;
    string lastname;
    int id;
    int scholarship;
};

int main() {
    string first, last;
    int id, scholar;
    cin >> first >> last >> id >> scholar;
    Student stu1(first, last, id, scholar);
    cin >> first >> last >> id >> scholar;
    Student stu2(first, last, id, scholar);
    stu1.showInfo();
    stu2.showInfo();
    stu1.raise();
    stu2.raise();
    return 0;
}
