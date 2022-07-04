//
// Created by Rain Chen on 19/4/2022.
//

#ifndef EXPERIMENT04_STRANGE_ADT_H
#define EXPERIMENT04_STRANGE_ADT_H

#include <iostream>
#include <string>

using namespace std;

template <typename E> class BinTree {
public:
    BinTree<E>(E t1, E t2);
    bool isSubTree();
private:
    E tree1;
    E tree2;
};

#endif //EXPERIMENT04_STRANGE_ADT_H
