// 实验四：二叉树的应用
// Created by Rain Chen on 19/4/2022

#include "adt.h"
#include "bin_tree.h"

template<typename E>
void preOrder1(BinNode<E>* tmp, vector<string>& ve) {
    if (tmp == nullptr) {
        ve.emplace_back("#");
        return ;
    }
    ve.push_back(tmp->getValue());
    preOrder1(tmp->left(), ve);
    preOrder1(tmp->right(), ve);
}
bool compare(BinNode<string>* s, BinNode<string>* s1) {
    vector<string> ve1,ve2;
    preOrder1(s, ve1);
    preOrder1(s1, ve2);
    if (ve1.size() != ve2.size()) {
        return false;
    } else {
        for (int i = 0; i < int(ve1.size()); ++i) {
            if (ve1[i] != ve2[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    auto *BT = new BinTree<string>;
    creatBinaryTree(BT);
    auto *BT1 = new BinTree<string>;
    creatBinaryTree(BT1);
    BinNode<string> *temp = BT->find(BT->getRoot(), BT1->getRoot()->getValue());
    if (temp != nullptr) {
        if (compare(temp, BT1->getRoot())) {
            cout << "yes" << endl;
            return 0;
        }
    } else {
        cout << "no" << endl;
    }
    cout << "no" << endl;
    return 0;
}
