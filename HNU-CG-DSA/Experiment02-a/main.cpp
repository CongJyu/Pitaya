//  实验二 a

#include "singlellist.h"

using namespace std;

int main() {
    LinkList L;
    string test;
    cin >> test;
    CreateLKList(L, test);
    int i = int(test.size()) - 1;
    while (L && i >= 0) {
        if (L->data != test[i]) {
            cout << "no" << endl;
            return 0;
        }
        L = L->next;
        i--;
    }
    if (L->next == nullptr && i == -1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
