//
// Created by Rain Chen on 19/3/2023.
//

#ifndef INC_2023_03_18_POLY_LLIST_H
#define INC_2023_03_18_POLY_LLIST_H

#include "link.h"
#include <iostream>

using namespace std;

template<typename E>
class llist {
private:
    Link<E> *head;       // Pointer to list header
    Link<E> *tail;       // Pointer to last element
    Link<E> *curr;       // Access to current element
    int cnt;

    void init() {        // Intialization helper method
        head = tail = curr = new Link<E>;
        cnt = 0;
    }

    void removeall() {   // Return link nodes to free store

        while (head != NULL) {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    llist() {
        init();    // Constructor
    }

    ~llist() {
        removeall();    // Destructor
    }

    void insert(node<E> &temp) {
        curr = head;
        int i = 0;
        for (int i = 0; i < cnt; i++) {
            if (temp.index > curr->next->element.index) {
                curr->next = new Link<E>(temp, curr->next);
                cnt++;
                break;
            }
        }
        if (i == cnt) {
            tail = tail->next = new Link<E>(temp, NULL);
            cnt++;
        }


    }

    void append(node<E> &temp) {
        tail = tail->next = new Link<E>(temp, NULL);
        cnt++;
    }

    void movetostart() {
        curr = head;
    }

    void next() {
        if (curr != tail)curr = curr->next;
    }

    int length() {
        return cnt;
    }

    node<E> &getvalue() {
        return curr->element;
    }

    void print() {
        curr = head;
        if (cnt == 0) {
            cout << "0" << endl;
        }

        if (cnt != 0) {
            for (int i = 0; i < cnt; i++) {
                cout << curr->next->element.k << " " << curr->next->element.index << endl;
                curr = curr->next;
            }
            cout << endl;
        }


    }

};

#endif //INC_2023_03_18_POLY_LLIST_H
