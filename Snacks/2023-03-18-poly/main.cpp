#include <iostream>
#include "link.h"
#include "llist.h"

using namespace std;

int main() {
    llist<int> l1, l2, l3;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        node<int> temp;
        cin >> temp.k >> temp.index;
        l1.insert(temp);
    }

    l1.movetostart();

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        node<int> temp;
        cin >> temp.k >> temp.index;
        l2.insert(temp);
    }

    l2.movetostart();

    node<int> tmp;
    int x1 = l1.length(), x2 = l2.length();

    while (x1 > 0 && x2 > 0) {
        if (l1.getvalue().index == l2.getvalue().index) {

            if (l1.getvalue().k + l2.getvalue().k != 0) {
                tmp.index = l1.getvalue().index;
                tmp.k = l1.getvalue().k + l2.getvalue().k;
                l3.append(tmp);
            }

            l1.next();
            l2.next();
            x1--;
            x2--;

        } else if (l1.getvalue().index > l2.getvalue().index) {
            tmp.index = l1.getvalue().index;
            tmp.k = l1.getvalue().k;
            l3.append(tmp);
            l1.next();
            x1--;
        } else if (l1.getvalue().index < l2.getvalue().index) {
            tmp.index = l2.getvalue().index;
            tmp.k = l1.getvalue().k;
            l3.append(tmp);
            l2.next();
            x2--;
        }

    }

    if (x1 == 0 && x2 == 0) {
        l3.print();
    } else if (x1 > 0) {
        while (x1 > 0) {
            tmp.index = l1.getvalue().index;
            tmp.k = l1.getvalue().k;
            l3.append(tmp);
            l1.next();
            x1--;
        }
        l3.print();
    } else if (x2 > 0) {
        while (x2 > 0) {
            tmp.index = l2.getvalue().index;
            tmp.k = l2.getvalue().k;
            l3.append(tmp);
            l1.next();
            x2--;
        }
        l3.print();
    }
    return 0;
}
