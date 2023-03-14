//
// Created by Rain Chen on 14/3/2023.
//

#ifndef INC_2023_03_14_POLY_LINK_H
#define INC_2023_03_14_POLY_LINK_H

#include <iostream>

#include <iostream>
#include "list.h"

using namespace std;

template<typename E>
class Link {
public:
    E element;  //  Value  for  this  node
    Link *next;  //  Pointer  to  next  node  in  list
    //  Constructors
    Link(const E &elemval, Link *nextval = NULL) {
        element = elemval;
        next = nextval;
    }

    Link(Link *nextval = NULL) {
        next = nextval;
    }
};

template<typename E>
class LList : public List<E> {
private:
    Link<E> *head;  //  Pointer  to  list  header
    Link<E> *tail;  //  Pointer  to  last  element
    Link<E> *curr;  //  Access  to  current  element
    int cnt;  //  Size  of  list

    void init() {  //  Intialization  helper  method
        curr = tail = head = new Link<E>;
        cnt = 0;
    }

    void removeall() {  //  Return  link  nodes  to  free  store
        while (head != NULL) {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    LList(int size = 100) {
        init();  //  Constructor
    }

    ~LList() {
        removeall();  //  Destructor
    }

    void print() {
        curr = head->next;
        while (curr != NULL) {
            cout << curr->element << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void clear() {
        removeall();  //  Clear  list
        init();
    }

    //  Insert  "it"  at  current  position
    void insert(const E &it) {
        curr->next = new Link<E>(it, curr->next);
        if (tail == curr)
            tail = curr->next;
        cnt++;
    }

    void append(const E &it) {  //  Append  "it"  to  list
        tail = tail->next = new Link<E>(it, NULL);
        cnt++;
    }

    //  Remove  and  return  current  element
    E remove() {
        Assert(curr->next != NULL, "No  element");
        E it = curr->next->element;
        Link<E> *ltemp = curr->next;
        if (tail == curr->next)
            tail = curr;
        curr->next = curr->next->next;
        delete ltemp;
        cnt--;
        return it;
    }

    //  Place  curr  at  list  start
    void moveToStart() {
        curr = head;
    }

    //  Place  curr  at  list  end
    void moveToEnd() {
        curr = tail;
    }

    //  Move  curr  one  step  left;  no  change  if  already  at  front
    void prev() {
        if (curr == head) return;
        Link<E> *temp = head;
        while (temp->next != curr) temp = temp->next;
        curr = temp;
    }

    //  Move  curr  one  step  right;  no  change  if  already  at  end
    void next() {
        if (curr != tail)
            curr = curr->next;
    }

    //  Return  length
    int length() const {
        return cnt;
    }

    //  Return  the  position  of  the  current  element
    int currPos() const {
        Link<E> *temp = head;
        int i;
        for (i = 0; curr != temp; i++)
            temp = temp->next;
        return i;
    }

    //  Move  down  list  to  "pos"  position
    void moveToPos(int pos) {
        Assert((pos >= 0) && (pos <= cnt), "Position  out  of  range");
        curr = head;
        for (int i = 0; i < pos; i++)
            curr = curr->next;
    }

    //  Return  current  element
    const E &getValue() const {
        Assert(curr->next != NULL, "No  value");
        return curr->next->element;
    }
};

void test(LList<int> &llist) {
    int act;
    int pos, value;
    do {
        cin >> act;
        switch (act) {
            case 1:
                cin >> pos >> value;
                llist.moveToPos(pos);
                llist.insert(value);
                llist.print();
                break;
            case 2:
                cin >> pos;
                llist.moveToPos(pos);
                llist.remove();
                llist.print();
                break;
            case 3:
                cin >> pos;
                llist.moveToPos(pos);
                cout << llist.getValue() << endl;
                break;
            case 4:
                cin >> value;
                for (llist.moveToStart(); llist.currPos() < llist.length(); llist.next()) {
                    if (llist.getValue() == value) {
                        cout << llist.currPos() << endl;
                        break;
                    }
                }
                break;
            case 0:
                return;
        }
    } while (true);
}

#endif //INC_2023_03_14_POLY_LINK_H
