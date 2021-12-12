//
//  main.cpp
//  HW7-Q04 结构体实现约瑟夫环
//
//  Created by Rain Chen on 2021/12/12.
//  Something wrong here

#include <iostream>
using namespace std;
struct Jose {
    int code;
    Jose * next;
};
Jose * chu;
Jose * List(int n) {
    Jose * head, * pre, * p;
    head = new Jose;
    head -> next = NULL;
    pre = head;
    for (int i = 1; i <= n; i++) {
        p = new Jose;
        p -> code = i;
        p -> next = NULL;
        pre -> next = p;
        pre = p;
    }
    p -> next = head -> next;
    return head;
}

void del(Jose * head, int pos) {
    Jose * p = head;
    Jose * l = head -> next;
    for (int i = 1; i < pos - 1; i++) {
        p = p -> next;
    }
    l = p;
    p = p -> next;
    l -> next = p -> next;
    chu = l -> next;
}

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
//    int t = n;
    Jose * s = List(n);
    while (n != 1) {
        while (cnt != 3) cnt++;
        del(s, cnt);
        cnt = 0;
        s = chu;
        n--;
    }
    cout << s -> code + 1 << endl;
    return 0;
}
