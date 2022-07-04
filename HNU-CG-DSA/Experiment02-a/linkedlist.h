//
// Created by Rain Chen on 2022/3/29.
//

#ifndef EXPERIMENT02_A_LINKEDLIST_H
#define EXPERIMENT02_A_LINKEDLIST_H

#include <iostream>

typedef char ElemType;
typedef int status;
typedef struct LNode {
    ElemType data;
    LNode *next;
} LNode, *LinkList;

status CreateLKList(LinkList &L, int n);
//  int FindOrInsert(LinkList &L, ElemType x);
LNode* reverseList(LinkList &L, int flag);

#endif //EXPERIMENT02_A_LINKEDLIST_H
