//
// Created by Rain Chen on 19/3/2023.
//

#ifndef INC_2023_03_18_POLY_LINK_H
#define INC_2023_03_18_POLY_LINK_H

#include <iostream>

template<typename E>
struct node {
    E k;
    E index;
};

template<typename E>
class Link {
public:
    node<E> element;
    Link<E> *next;

    Link(node<E> &elemval, Link *nextval = NULL) {
        element.k = elemval.k;
        element.index = elemval.index;
        next = nextval;
    }

    Link(Link *nextval = NULL) {
        next = nextval;
    }
};

#endif //INC_2023_03_18_POLY_LINK_H
