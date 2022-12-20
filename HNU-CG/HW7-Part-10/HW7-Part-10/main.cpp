//
//  main.cpp
//  HW7-Part-10 逆转单向链表
//
//  Created by Rain Chen on 2021/12/25.
//

#include <iostream>
using namespace std;

typedef struct LNode * PtrToLNode;
struct LNode {
    long data;
    PtrToLNode next;
};

void reverseList(PtrToLNode head) {
    PtrToLNode rhead = new struct LNode;
    rhead -> next = NULL;
    PtrToLNode p = head -> next;
    while (p != NULL) {
        head -> next = p -> next;
        p -> next = rhead -> next;
        rhead -> next = p;
        p = head -> next;
    }
    head -> next = rhead -> next;
    delete rhead;
}

void printList(PtrToLNode head) {
    PtrToLNode p = head -> next;
    while (p != NULL) {
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

int main() {
    long data[8] = {10, 45, 895, 371, 908, 425, -484, 0};
    int arrSize = sizeof(data) / sizeof(data[0]);
    PtrToLNode head, p, tail;
    head = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p -> data = data[i];
        p -> next = NULL;
        tail -> next = p;
        tail = p;
    }
    reverseList(head);
    printList(head);
    while (head -> next != NULL) {
        p = head -> next;
        head -> next = p -> next;
        delete p;
    }
    delete head;
    return 0;
}
