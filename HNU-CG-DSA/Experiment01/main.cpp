//
//  实验预测 01
//  基于链表的线性表实现
//  Created by Rain Chen on 2022/3/24

#include <iostream>
#include <string>

using namespace std;

void Assert(bool val, string s) {
    if (!val) {
        cout << "断言失败：" << s << endl;
    }
}

template <typename E> class List {
private:
    void operator=(const List&) {}  //  Protect assignment
    List(const List&) {}  //  Protect copy constructor
public:
    List() {}  //  Default constructor
    virtual ~List() {}  //  Base destructor

    //  Clear contents from the list, to make it empty
    virtual void clear() = 0;

    //  Insert an element at the current location
    //  item: The element to be inserted
    virtual void insert(const E& item) = 0;

    //  Append an element at the end of the list
    //  item: The element to be appended
    virtual void append(const E& item) = 0;

    //  Remove and return the current element
    //  Return: the element was removed
    virtual E remove() = 0;

    //  Set the current position one step left.
    //  No change if already at beginning
    virtual void prev() = 0;

    //  Move the current position one step left.
    //  No change if already at beginning
    virtual void next() = 0;

    //  Return: The number of elements in the list
    virtual int length() const = 0;

    //  Return: The position of the current element
    virtual int currPos() const  = 0;

    //  Set current position
    //  pos: The position to make current
    virtual void moveToPos(int pos) = 0;

    //  Return: The current element
    virtual const E& getValue() const = 0;
};

//  Singly linked list node
template <typename E> class Link {
public:
    E element;  //  Value for this node
    Link *next;  //  Pointer to next node in list
    //  Constructors
    Link(const E& elemval, Link* nextval = NULL) {
        //  write: begin
        element = elemval;
        next = nextval;
        //  write: end
    }
    Link(Link* nextval = NULL) {
        //  write: begin
        next = nextval;
        //  write: end
    }
};

template <typename E> class LList: public List<E> {
private:
    Link<E>* head;
    Link<E>* tail;
    Link<E>* curr;
    int cnt;
    void init() {
        //  write: start
        curr = tail = head = new Link<E>;
        cnt = 0;
        //  write: end
    }
    void removeall() {
        //  write: start
        curr = head;
        head = head->next;
        delete curr;
        //  write: end
    }

public:
    LList(int size = 100) {
        init();  //  Constructor
    }
    ~LList() {
        removeall();  //  Destructor
    }

    //  使用空格分隔输出线性表中的所有数据，最终换行
    void print() {
        //  write: start
        Link<E>* p = head->next;
        while (p != NULL) {
            cout << p->element << " ";
            p = p->next;
        }
        cout << endl;
        //  write: end
    }

    void clear() {
        removeall();
        init();
    }

    //  insert "it" at current position
    void insert(const E& it) {
        //  write: start
        curr->next = new Link<E>(it, curr->next);
        if (tail == curr) {
            tail = curr->next;
        }
        cnt++;
        //  write: end
    }

    void append(const E& it) {
        //  write: start
        tail = tail->next = new Link<E>(it, NULL);
        cnt++;
        //  write: end
    }

    //  Remove and return current element
    E remove() {
        Assert(curr->next != NULL, "No element");
        //  write: start
        E it = curr->next->element;
        Link<E>* ltemp = curr->next;
        if (tail == curr->next) {
            tail = curr;
        }
        curr->next = curr->next->next;
        delete ltemp;
        cnt--;
        return it;
        //  write: end
    }

    //  Place curr at list start
    void moveToStart() {
        //  write: start
        curr = head;
        //  write: end
    }

    //  Place curr at list end
    void moveToEnd() {
        //  write: start
        curr = tail;
        //  write: end
    }

    //  Move curr one step left; no change if already at front
    void prev() {
        //  write: start
        if (curr == head) {
            return;
        }
        Link<E>* temp = head;
        while (temp->next != curr) {
            temp = temp->next;
        }
        curr = temp;
        //  write: end
    }

    //  Move curr one step right; no change if already at end
    void next() {
        //  write: start
        if (curr != tail) {
            curr = curr->next;
        }
        //  write: end
    }

    //  Return length
    int length() const {
        //  write: start
        return cnt;
        //  write: end
    }

    //  Return the position of the current element
    int currPos() const {
        //  write: start
        Link<E>* temp = head;
        int i;
        for (i = 0; curr != temp; i++) {
            temp = temp->next;
        }
        return i;
        //  write: end
    }

    //  Move down list to "pos" position
    void moveToPos(int pos) {
        Assert((pos >= 0) && (pos <= cnt), "Position out of range");
        //  write: start
        curr = head;
        for (int i = 0; i < pos; i++) {
            curr = curr->next;
        }
        //  write: end
    }

    //  Return current element
    const E& getValue() const {
        Assert(curr->next != NULL, "No value");
        //  write: start
        return curr->next->element;
        //  write: end
    }
};

void test(LList<int> &llist) {
    int act;
    int pos, value;
    do {
        //  read command: 1.insert, 2.remove, 3.getvalue, 4.search
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
                llist.insert(value);
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

int main() {
    LList<int> llist;
    test(llist);
    return 0;
}
