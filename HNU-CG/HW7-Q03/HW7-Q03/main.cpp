//
//  main.cpp
//  HW7-Q03 单向列表插入排序
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
struct str {
    int id;
    int age;
    string name;
    string sex;
};
class cz {
    friend ostream& operator << (ostream& a, str &c);
private:
    int a, b;
};

ostream& operator << (ostream& out, str & c) {
    out << "(" << c.id << "|" << c.age << "|" << c.name << "|" << c.sex << ")";
    return out;
}
struct node {
    str data;
    node * next;
};
node * list(str a[], int n) {
    node * pre, * p, * head;
    head = new node;
    head -> next = NULL;
    pre = head;
    for (int i = 0; i < n; i++) {
        p = new node;
        p -> data = a[i];
        p -> next = NULL;
        pre -> next = p;
        pre = p;
    }
    return head;
}
bool insort(str a, str b) {
    if (a.id < b.id)
        return true;
    else
        return false;
}

int main() {
    str a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i].name >> a[i].id >> a[i].sex >> a[i].age;
    }
    node * s = list(a, 10);
    cout << "Before ordering(id|age|name|sex)" << endl;
    s = s -> next;
    while (s != NULL) {
        cout << s -> data << endl;
        s = s-> next;
    }
    cout << "After ordering(id|age|name|sex)" << endl;
    sort(a, a + 10, insort);
    node * l = list(a, 10);
    l = l -> next;
    while (l != NULL) {
        cout << l -> data << endl;
        l = l -> next;
    }
    return 0;
}

