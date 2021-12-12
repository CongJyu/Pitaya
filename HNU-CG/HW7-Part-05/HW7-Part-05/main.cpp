//
//  main.cpp
//  HW7-Part-05 结构数组冒泡排序
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
using namespace std;

struct Person {
    char name[20];
    unsigned long id;
    float salary;
};

void bubbleSort(Person personArr[]) {
    /* write */
    for (int i = 0; i < 6; i++) {
        for (int j = i; j < 6; j++) {
            if (personArr[i].salary > personArr[j].salary) {
                Person tmp;
                tmp = personArr[i];
                personArr[i] = personArr[j];
                personArr[j] = tmp;
            }
        }
    }
}

Person allone[6] = {
    {"jone", 12345, 339.0},
    {"david", 13916, 449.0},
    {"marit", 27519, 311.0},
    {"jason", 42876, 623.0},
    {"peter", 23987, 400.0},
    {"yoke", 12335, 511.0}
};

int main() {
    bubbleSort(allone);
    for (int k = 0; k < 6; k++) {
        cout << allone[k].name << " "
        << allone[k].id << " "
        << allone[k].salary << endl;
    }
    return 0;
}
