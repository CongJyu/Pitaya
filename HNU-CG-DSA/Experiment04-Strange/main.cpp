//
// Created by Rain Chen on 19/4/2022
//

#include "adt.h"
#include "bin_tree.h"

int main() {
    string tree1, tree2;
    cin >> tree1 >> tree2;
    BinTree<string> judge_tree(tree1, tree2);
    judge_tree.isSubTree();
    return 0;
}
