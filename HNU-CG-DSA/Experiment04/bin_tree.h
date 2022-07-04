//
// Created by Rain Chen on 19/4/2022.
//

#ifndef EXPERIMENT04_BIN_TREE_H
#define EXPERIMENT04_BIN_TREE_H

#include "adt.h"

template <typename E>
BinNode<E>::BinNode() {
    lc = NULL;
    rc = NULL;
}
template <typename E>
BinNode<E>::BinNode(E tmp, BinNode<E>* l, BinNode<E>* r) {
    elem = tmp;
    lc = l;
    rc = r;
}
template<typename E>
BinNode<E>* BinNode<E>::left() {
    return lc;
}
template <typename E>
BinNode<E>* BinNode<E>::right() {
    return rc;
}
template <typename E>
void BinNode<E>::setLeft(BinNode* l) {
    lc = l;
}
template <typename E>
void BinNode<E>::setRight(BinNode* r){
    rc = r;
}
template <typename E>
void BinNode<E>::setValue(E tmp){
    elem = tmp;
}
template <typename E>
E BinNode<E>::getValue(){
    return elem;
}
template <typename E>
bool BinNode<E>::isLeaf() {
    if (lc == NULL && rc == NULL) {
        return true;
    } else {
        return false;
    }
}

template <typename E>

void BinTree<E>:: clear(BinNode<E>* r)
{
    if (r == NULL)return;
    clear(r->left());
    clear(r->right());
    delete r;
    r = NULL;

}
template<typename E>
void BinTree<E>::preOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
    if (tmp == NULL) {
        return;
    }
    cout << tmp->getValue() << " ";
    preOrder(tmp->left(), visit);
    preOrder(tmp->right(), visit);
}
template <typename E>
void BinTree<E>::inOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
    if (tmp == NULL) {
        return;
    }
    inOrder(tmp->left(), visit);
    cout << tmp->getValue() << " ";
    inOrder(tmp->right(), visit);
}
template <typename E>
void BinTree<E>::postOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
    if (tmp == NULL) {
        return;
    }
    postOrder(tmp->left(), visit);
    postOrder(tmp->right(), visit);
    cout << tmp->getValue() << " ";
}
template <typename E>
void BinTree<E>::LevelOrderTranverse(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
    if (tmp == NULL) {
        return;
    }
    queue<BinNode<E>*>qu;
    qu.push(tmp);
    while (!qu.empty()) {
        int size = qu.size();
        for (int i = 0; i < size; ++i) {
            BinNode<E>* tem = qu.front();
            cout << tem->getValue() << " ";
            if (tem->left() != NULL) {
                qu.push(tem->left());
            }
            if (tem->right() != NULL) {
                qu.push(tem->right());
            }
            qu.pop();
        }
    }
}
template <typename E>
int BinTree<E>::BinTreeDepth(BinNode<E>* tmp) {
    if (tmp == NULL) {
        return 0;
    } else {
        return max(BinTreeHeight(tmp->left()), BinTreeHeight(tmp->right()));
    }
}
template <typename E>
int BinTree<E>::BinTreeNodes(BinNode<E>* tmp) {
    if (tmp == NULL) {
        return 0;
    } else {
        return 1 + BinTreeNodes(tmp->left()) + BinTreeNodes(tmp->right());
    }
}
template <typename E>
int BinTree<E>::BinTreeHeight(BinNode<E>* tmp) {
    if (tmp == NULL) {
        return 0;
    } else {
        return  1 + max(BinTreeHeight(tmp->left()), BinTreeHeight(tmp->right()));
    }
}
template <typename E>
int BinTree<E>::BinTreeLeafs(BinNode<E>* tmp) {
    if (tmp == NULL) {
        return 0;
    } else if (tmp->isLeaf()) {
        return 1;
    } else {
        return BinTreeLeafs(tmp->left()) + BinTreeLeafs(tmp->right());
    }
}
template <typename E>
BinNode<E>* BinTree<E>::find(BinNode<E>* tmp, E e) {
    if (tmp == NULL) {
        return NULL;
    } else if (tmp->getValue() == e) {
        return tmp;
    } else {
        BinNode<E>* tmp1 = find(tmp->left(), e);
        if (tmp1) {
            return tmp1;
        } else {
            BinNode<E>* tmp2 = find(tmp->right(), e);
            if (tmp2) {
                return tmp2;
            }
        }
    }
    return NULL;
}
template <typename E>
BinTree<E>::BinTree() {
    root = new BinNode<E>;
}
template <typename E>
BinTree<E>::~BinTree() {
    clear(root);
}
template <typename E>
bool BinTree<E>::BinTreeEmpty() {
    if (root == NULL) {
        return true;
    } else {
        return false;
    }
}
template <typename E>
BinNode<E>* BinTree<E>::getRoot() {
    return root;
}
template <typename E>
void BinTree<E>::setRoot(BinNode<E>* r) {
    root = r;
}
template <typename E>
void BinTree<E>::clear() {
    clear(root);
    root = NULL;
}
template <typename E>
void BinTree<E>::preOrder(void (*visit)(BinNode<E>* node)) {
    preOrder(root, visit);
}
template <typename E>
void BinTree<E>::inOrder(void (*visit)(BinNode<E>* node)) {
    inOrder(root, visit);
}
template <typename E>
void BinTree<E>::postOrder(void (*visit)(BinNode<E>* node)) {
    postOrder(root, visit);
}
template <typename E>
void BinTree<E>::LevelOrderTranverse(void (*visit)(BinNode<E>* node)) {
    LevelOrderTranverse(root, visit);
}
template <typename E>
int BinTree<E>::BinTreeDepth() {
    return BinTreeDepth(root);
}
template <typename E>
int BinTree<E>::BinTreeNodes() {
    return BinTreeNodes(root);
}
template <typename E>
int BinTree<E>::BinTreeHeight() {
    return BinTreeHeight(root);
}
template <typename E>
int BinTree<E>::BinTreeLeafs() {
    return BinTreeLeafs(root);
}

template <typename E>
void printNode(BinNode<E>* tmp) {
    cout << tmp->getValue() << " ";
}

template <typename E>
BinNode<E>* creatBinaryTree(string s[], int& x, int n) {
    if (s[x] == "#") {
        return nullptr;
    } else {
        auto* node = new BinNode<E>(s[x]);
        x = x + 1;
        if (x < n) {
            node->setLeft(creatBinaryTree<E>(s, x, n));
        }
        x++;
        if (x < n) {
            node->setRight(creatBinaryTree<E>(s, x, n));
        }
        return node;
    }
}

void creatBinaryTree(BinTree<string>* BT) {
    int n = 0;
    string te;
    cin >> te;
    n = te.size();
    auto* s = new string[n];
    for (int i = 0; i < n; ++i) {
        s[i] = te[i];
    }
    int now = 0;
    BT->setRoot(creatBinaryTree<string>(s, now, n));
}

#endif //EXPERIMENT04_BIN_TREE_H
