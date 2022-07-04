#include <iostream>

template<typename E>
class Link {
public:
    E element;
    Link *next;

    Link(const E &elemval, Link *nextval = NULL) {
        element = elemval;
        next = nextval;
    }

    Link(Link *nextval = NULL) { next = nextval; }
};

