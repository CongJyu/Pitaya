//
//  main.cpp
//  HW7-Part-09 在jone前插入节点
//
//  Created by Rain Chen on 2021/12/25.
//

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    Student * next;
};

void addStudent(Student * head, Student * s) {
    while (head -> next) {
        if (head -> next -> name == "jone") {
            Student * temp = head -> next;
            head -> next = s;
            s -> next = temp;
            return;
        }
        head = head -> next;
    }
    head -> next = s;
}

int main() {
    Student * head = new Student;
    head -> next = nullptr;
    head -> name = "";
    Student * pre = head;
    for (int i = 0; i < 5; i++) {
        Student * s = new Student;
        string temp;
        cin >> temp;
        s -> name = temp;
        s -> next = nullptr;
        pre -> next = s;
        pre = s;
    }
    
    string name;
    cin >> name;
    Student * s = new Student;
    s -> name = name;
    s -> next = nullptr;
    addStudent(head, s);
    
    for (Student * p = head -> next; p; p = p -> next) {
        cout << p -> name << " ";
    }
    return 0;
}
