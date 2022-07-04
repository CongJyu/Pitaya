/*
 * Experiment03 基于二叉链表的二叉树实现
 * Created by Rain Chen on 2022/4/4
 */

#include <iostream>
#include <string>
#include <queue>

using namespace std;

/*
 * 节点类
 * 是一个模版类，使用 template
 */
template <typename E> class BinNode {
private:
    BinNode* lc;  // 左子树节点
    BinNode* rc;  // 右子树节点
    E elem;
public:
    BinNode() {
        lc = nullptr;
        rc = nullptr;
    }
    BinNode(E tmp, BinNode* l = nullptr, BinNode* r = nullptr) {
        elem = tmp;
        lc = l;
        rc = r;
    }
    BinNode* left() {
        return lc;
    }
    BinNode* right() {
        return rc;
    }
    void setLeft(BinNode* l) {
        lc = l;
    }
    void setRight(BinNode* r) {
        rc = r;
    }
    void setValue(E tmp) {
        elem = tmp;
    }
    E getValue() {
        return elem;
    }
    bool isLeaf() {
        if (lc == nullptr && rc == nullptr) {
            return true;
        } else {
            return false;
        }
    }
};

/*
 * 二叉树类
 * template 模版类
 */
template <typename E> class BinTree {
private:
    BinNode<E>* root;  // 根
    void clear(BinNode<E>* r) {
        if (r == nullptr) {
            return;
        }
        if (r->left() != nullptr) {
            clear(r->left());
        }
        if (r->right() != nullptr) {
            clear(r->right());
        }
        delete r;
        r = nullptr;
    }
    // 前序遍历
    void preOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
        if (tmp == nullptr) {
            return;
        }
        visit(tmp);
        preOrder(tmp->left(), visit);
        preOrder(tmp->right(), visit);
    }
    // 中序遍历
    void inOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
        if (tmp == nullptr) {
            return;
        }
        inOrder(tmp->left(), visit);
        visit(tmp);
        inOrder(tmp->right(), visit);
    }
    // 后序遍历
    void postOrder(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
        if (tmp == nullptr) {
            return;
        }
        postOrder(tmp->left(), visit);
        postOrder(tmp->right(), visit);
        visit(tmp);
    }
    // 层次遍历
    void LevelOrderTranverse(BinNode<E>* tmp, void (*visit)(BinNode<E>* node)) {
        if (tmp == nullptr) {
            return;
        }
        queue<BinNode<E>*> que;
        que.push(tmp);
        BinNode<E> *curr;
        while (!que.empty()) {
            curr = que.front();
            if (curr->left() != nullptr) {
                que.push(curr->left());
            }
            if (curr->right() != nullptr) {
                que.push(curr->right());
            }
            que.pop();
            visit(curr);
        }
    }
    // 查询二叉树的深度
    int BinTreeDepth(BinNode<E>* tmp) {
        if (tmp == nullptr) {
            return 0;
        }
        return BinTreeHeight(tmp) - 1;
    }
    // 查询二叉树节点的个数
    int BinTreeNodes(BinNode<E>* tmp) {
        if (tmp == nullptr) {
            return 0;
        }
        queue<BinNode<E>*> que;
        que.push(tmp);
        int sum = 0;
        BinNode<E> *curr;
        while (!que.empty()) {
            curr = que.front();
            if (curr->left() != nullptr) {
                que.push(curr->left());
            }
            if (curr->right() != nullptr) {
                que.push(curr->right());
            }
            que.pop();
            sum++;
        }
        return sum;
    }
    // 查询二叉树的高度
    int BinTreeHeight(BinNode<E>* tmp) {
        if (tmp == nullptr) {
            return 0;
        }
        int lh = 0, rh = 0;
        if (tmp->left() != nullptr) {
            lh = BinTreeHeight(tmp->left());
        }
        if (tmp->right() != nullptr) {
            rh = BinTreeHeight(tmp->right());
        }
        if (lh >= rh) {
            return lh + 1;
        } else {
            return rh + 1;
        }
    }
    int BinTreeLeafs(BinNode<E>* tmp) {
        if (tmp == nullptr) {
            return 0;
        }
        queue<BinNode<E>*> que;
        que.push(tmp);
        int sum = 0;
        BinNode<E> *curr;
        while (!que.empty()) {
            curr = que.front();
            if (curr->left() != nullptr) {
                que.push(curr->left());
            }
            if (curr->right() != nullptr) {
                que.push(curr->right());
            }
            if (curr->isLeaf()) {
                sum++;
            }
            que.pop();
        }
        return sum;
    }
    bool find(BinNode<E>* tmp, E e) {
        if (tmp == nullptr) {
            return false;
        }
        queue<BinNode<E>*> que;
        que.push(tmp);
        BinNode<E> *curr;
        while (!que.empty()) {
            curr = que.front();
            if (curr->left() != nullptr) {
                que.push(curr->left());
            }
            if (curr->right() != nullptr) {
                que.push(curr->right());
            }
            if (curr->getValue() == e) {
                return true;
            }
            que.pop();
        }
        return false;
    }
public:
    BinTree() {
        root = new BinNode<E>;
    }
    ~BinTree() {
        clear(root);
    }
    bool BinTreeEmpty() {
        if (root == nullptr) {
            return true;
        } else {
            return false;
        }
    }
    BinNode<E>* getRoot() {
        return root;
    }
    void setRoot(BinNode<E>* r) {
        root = r;
    }
    /*
     * 下面的函数是对外的函数，内部会有一些同名函数，但是参数列表不一样，实现数据的封装
     * 外部的调用不会涉及到内部的数据对象
     */
    void clear() {
        clear(root);
        root = nullptr;
    }
    void preOrder(void (*visit)(BinNode<E>* node)) {
        preOrder(root, visit);
    }
    void inOrder(void (*visit)(BinNode<E>* node)) {
        inOrder(root, visit);
    }
    void postOrder(void (*visit)(BinNode<E>* node)) {
        postOrder(root, visit);
    }
    void LevelOrderTranverse(void (*visit)(BinNode<E>* node)) {
        LevelOrderTranverse(root, visit);
    }
    int BinTreeDepth() {
        return BinTreeDepth(root);
    }
    int BinTreeNodes() {
        return BinTreeNodes(root);
    }
    int BinTreeHeight() {
        return BinTreeHeight(root);
    }
    int BinTreeLeafs() {
        return BinTreeLeafs(root);
    }
    bool find(E e) {
        return find(root, e);
    }
};

/*
 * 打印节点用的函数
 */
template <typename E> void printNode(BinNode<E>* tmp) {
    cout << tmp->getValue() << " ";
}
/*
 * 构建二叉树的主函数
 * 根据先序遍历，递归思想
 */
template <typename E> BinNode<E>* createBinaryTree(string s[], int &x, int n) {
    if (s[x] == "/") {
        return nullptr;
    } else {
        BinNode<E>* node = new BinNode<E>(s[x]);
        x = x + 1;
        if (x < n) {
            node->setLeft(createBinaryTree<E>(s, x, n));
        }
        x = x + 1;
        if (x < n) {
            node->setRight(createBinaryTree<E>(s, x, n));
        }
        return node;
    }
}
/*
 * 构建二叉树的函数
 * 包含：构建二叉树的主函数
 * 作用：仅仅使主函数简洁一些
 */
void createBinaryTree(BinTree<string>* BT) {
    cout << "现在进入二叉树构建程序……" << endl;
    cout << "请输入二叉树有多少个节点（空节点也计算在其中）：" << endl;
    int n = 0;
    cin >> n;
    cout << "请按 preorder 顺序输入，遇到 NULL 请输入 '/'，用空格或回车隔开均可以：" << endl;
    string* s = new string [n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int now = 0;
    BT->setRoot(createBinaryTree<string>(s, now, n));
}

/*
 * 测试程序
 * 本程序的二叉树是一个模版类，如果需要改成其他类，在 <> 中修改相关参数
 * 程序默认为最具有普遍性的 string
 */
int main() {
    BinTree<string>* BT = new BinTree<string>;
    createBinaryTree(BT);
    string strfind;
    cin >> strfind;
    /*
     * 此处已经构建好一棵二叉树
     * 下面是二叉树的展示
     */
    cout << "0: 判断是否为空树：";
    if (BT->BinTreeEmpty()) {
        cout << "是" << endl;
    } else {
        cout << "否" << endl;
    }
    cout << "1: 前序遍历：";
    BT->preOrder(printNode);
    cout << endl;
    cout << "2: 中序遍历：";
    BT->inOrder(printNode);
    cout << endl;
    cout << "3: 后序遍历：";
    BT->postOrder(printNode);
    cout << endl;
    cout << "4: 层次遍历：";
    BT->LevelOrderTranverse(printNode);
    cout << endl;
    /*
     * 这里好像题目给出的代码
     * 高度和深度反过来了
     */
    cout << "5: 记录树的深度：";
    cout << BT->BinTreeDepth() << endl;
    cout << "6: 记录树的高度：";
    cout << BT->BinTreeHeight() << endl;
    cout << "7: 统计节点：";
    cout << BT->BinTreeNodes() << endl;
    cout << "8: 统计叶子节点：";
    cout << BT->BinTreeLeafs() << endl;
    cout << "9: 查找：" << strfind << ": ";
    if (BT->find(strfind)) {
        cout << "存在" << endl;
    } else {
        cout << "不存在" << endl;
    }
    cout << "10: 是否清空：";
    BT->clear();
    cout << "已清空" << endl;
    cout << "5: 记录树的深度：";
    cout << BT->BinTreeDepth() << endl;
    cout << "6: 记录树的高度：";
    cout << BT->BinTreeHeight() << endl;
    cout << "7: 统计节点：";
    cout << BT->BinTreeNodes() << endl;
    cout << "8: 统计叶子节点：";
    cout << BT->BinTreeLeafs() << endl;
    return 0;
}
