//
//  main.cpp
//  Hw7-Part-08 合并有序链表
//
//  Created by Rain Chen on 2021/12/25.
//

#include <iostream>
using namespace std;

typedef struct LNode * PtrToLNode;

struct LNode {
    int data;
    PtrToLNode next;
};

PtrToLNode mergeList(PtrToLNode head1, PtrToLNode head2) {
    PtrToLNode temp, res;
    temp = new struct LNode;
    res = temp;
    head1 = head1 -> next;
    head2 = head2 -> next;
    while (head1 && head2) {
        if (head1 -> data >= head2 -> data) {
            temp -> next = head2;
            head2 = head2 -> next;
        } else {
            temp -> next = head1;
            head1 = head1 -> next;
        }
        temp = temp -> next;
    }
    temp -> next = (head1) ? head1 : head2;
    return res;
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
    int data[2][8] = {{-404, 0, 10, 45, 371, 425, 895, 908}, {0, 3, 12, 50, 900, 1024, 2048}};
    int arrSize = sizeof(data[0]) / sizeof(data[0][0]);
    PtrToLNode head1, head2, p, tail;
    head1 = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p -> data = data[0][i];
        p -> next = NULL;
        tail -> next = p;
        tail = p;
    }
    head2 = tail = new struct LNode;
    for (int i = 0; i < arrSize; i++) {
        p = new struct LNode;
        p -> data = data[1][i];
        p -> next = NULL;
        tail -> next = p;
        tail = p;
    }
    PtrToLNode head = mergeList(head1, head2);
    printList(head);
    while (head -> next != NULL) {
        p = head -> next;
        head -> next = p -> next;
        delete p;
    }
    delete head;
    return 0;
}
