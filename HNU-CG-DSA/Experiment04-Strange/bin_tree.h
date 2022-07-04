//
// Created by Rain Chen on 19/4/2022.
//

#ifndef EXPERIMENT04_STRANGE_BIN_TREE_H
#define EXPERIMENT04_STRANGE_BIN_TREE_H

#include "adt.h"

template <typename E> BinTree<E>::BinTree(E t1, E t2) {
    tree1 = t1;
    tree2 = t2;
}

template <typename E> bool BinTree<E>::isSubTree() {
    if (tree1.find(tree2) != string::npos) {
        cout << "yes" << endl;
        return true;
    } else {
        cout << "no" << endl;
        return false;
    }
}

#endif //EXPERIMENT04_STRANGE_BIN_TREE_H
