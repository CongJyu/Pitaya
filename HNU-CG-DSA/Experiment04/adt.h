//
// Created by Rain Chen on 19/4/2022.
//

#ifndef EXPERIMENT04_ADT_H
#define EXPERIMENT04_ADT_H

#include <iostream>
#include <string>
#include <queue>

using namespace std;

template <typename E> class BinNode {
private:
    BinNode* lc;
    BinNode* rc;
    E elem;
public:
    BinNode();
    BinNode(E tmp, BinNode<E>* l = nullptr, BinNode<E>* r = nullptr);
    BinNode* left();
    BinNode* right();
    void setLeft(BinNode* l);
    void setRight(BinNode* r);
    void setValue(E tmp);
    E getValue();
    bool isLeaf();
};

template <typename E> class BinTree {
private:
    BinNode<E>* root;
    void clear(BinNode<E>* r);
    void  preOrder(BinNode<E>* tmp, void (*visit) (BinNode<E>* node));
    void inOrder(BinNode<E>* tmp, void (*visit) (BinNode<E>* node));
    void postOrder(BinNode<E>* tmp, void (*visit) (BinNode<E>* node));
    void LevelOrderTranverse(BinNode<E>* tmp, void (*visit) (BinNode<E>* node));
    int BinTreeDepth(BinNode<E>* tmp);
    int BinTreeNodes(BinNode<E>* tmp);
    int BinTreeHeight(BinNode<E>* tmp);
    int BinTreeLeafs(BinNode<E>* tmp);
public:
    BinNode<E>* find(BinNode<E>* tmp, E e);
    BinTree();
    ~BinTree();
    bool BinTreeEmpty();
    BinNode<E>* getRoot();
    void setRoot(BinNode<E>* r);
    void clear();
    void preOrder(void (*visit) (BinNode<E>* node));
    void inOrder(void (*visit) (BinNode<E>* node));
    void postOrder(void (*visit) (BinNode<E>* node));
    void LevelOrderTranverse(void (*visit) (BinNode<E>* node));
    int BinTreeDepth();
    int BinTreeHeight();
    int BinTreeNodes();
    int BinTreeLeafs();
};

template <typename E> void printNode(BinNode<E>* tmp);
template <typename E> BinNode<E>* createBinaryTree(string s[], int& x, int n);
void createBinaryTree(BinTree<string>* BT);

#endif //EXPERIMENT04_ADT_H
