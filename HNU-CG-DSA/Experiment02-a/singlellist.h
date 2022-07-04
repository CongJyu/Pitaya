//
// Created by Rain Chen on 2022/3/29.
//

#ifndef EXPERIMENT02_A_SINGLELLIST_H
#define EXPERIMENT02_A_SINGLELLIST_H

#include "linkedlist.h"

using namespace std;

status CreateLKList(LinkList &L, string s) {
    L = new LNode;
    L->next = nullptr;
    int len = s.size();
    for (int i = len; i >= 0; i--) {
        LNode *p = new LNode;
        p->data = s[i];
        p->next = L->next;
        L->next = p;
    }
    L = L->next;
    return 1;
}

LNode *reverseList(LinkList &L, int flag) {
    if (!L->next || (!L->next->next && flag == 1)) {
        return nullptr;
    }
    if (!L->next->next) {
        LNode *t = L->next;
        t->next = L;
        L->next = nullptr;
        return t;
    } else {
        LNode *t = reverseList(L->next, 0);
        if (flag) {
            L->next->next = nullptr;
            L->next = t;
        } else {
            L->next->next = L;
            L->next = nullptr;
        }
        return t;
    }
}

#endif //EXPERIMENT02_A_SINGLELLIST_H
