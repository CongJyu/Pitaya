//
//  main.cpp
//  HW7-Part-07 学生链表的构造与输出
//
//  Created by Rain Chen on 2021/12/12.
//  Something wrong

#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    long number;
    float score;
    Student * next;
};

//  定义头节点
Student * head;

Student * getNode() {
    int num;
    float sc;
    cin >> num >> sc;
    if (num == 0) {
        return NULL;
    }
    Student * p = new Student;
    p -> number = num;
    p -> score = sc;
    p -> next = 0;
    return p;
}

void Create() {
    if ((head = getNode()) == 0) {
        /* write */
        return;
    }
    for (int i = 0; i < num; i++) {
        pE -> next = pS;
    }
}

void Showlist() {
    cout << "now the items of the list are \n";
    for (int i = 0; i < num; i++) {
        cout << p -> number << "," << score << endl;
    }
}

int main() {
    cout << fixed << setprecision(1);
    Create();
    Showlist();
    return 0;
}
