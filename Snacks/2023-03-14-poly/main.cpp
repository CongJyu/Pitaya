#include <iostream>
#include <algorithm>
#include "link.h"

struct Item {
    int coefficient;
    int exponent;
};  // item structure of ployx, will be stored in linked-list later

bool cmp(Item a, Item b) {
    // compare the exponent
    if (a.exponent != b.exponent) {
        return a.exponent > b.exponent;
    } else {
        return a.coefficient < b.coefficient;
    }
}

int main() {
    // input part
    int n{};  // the number of the polyx_1
    cin >> n;
    Item *polyx_tmp_1 = new Item[n];
    for (int i{}; i < n; ++i) {
        int co{}, ex{};
        cin >> co >> ex;  // coefficient and exponent input
        polyx_tmp_1[i].coefficient = co;
        polyx_tmp_1[i].exponent = ex;
    }
    int m{};  // the number of the polyx_2
    cin >> m;
    Item *polyx_tmp_2 = new Item[m];
    for (int i{}; i < m; ++i) {
        int co{}, ex{};
        cin >> co >> ex;  // coefficient and exponent input
        polyx_tmp_2[i].coefficient = co;
        polyx_tmp_2[i].exponent = ex;
    }

    // process part 1
    sort(polyx_tmp_1, polyx_tmp_1 + n, cmp);
    sort(polyx_tmp_2, polyx_tmp_2 + n, cmp);

    // process part 2: store in linked-list
    LList<Item> polyx_1;
    LList<Item> polyx_2;
    for (int i{}; i < n; ++i) {
        polyx_1.append(polyx_tmp_1[i]);
    }
    for (int i{}; i < m; ++i) {
        polyx_2.append(polyx_tmp_2[i]);
    }

    // process part 3: need to merge the two linked-list above
    // TODO: code is not completed.

    // output part: print the element of the linked-list
    // TODO: code is not completed.

    delete[] polyx_tmp_1;
    delete[] polyx_tmp_2;
    return 0;
}
