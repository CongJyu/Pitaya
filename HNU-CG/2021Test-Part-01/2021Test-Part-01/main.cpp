//
//  main.cpp
//  2021Test-Part-01 小倩的元旦晚会（面向对象片断编程-期考模拟题）
//
//  Created by Rain Chen on 2022/1/7.
//

#include <iostream>
#include <string>
using namespace std;
class Item {
public:
    long ID;
    long number;
    Item() {
        ID = 0;
        number = 0;
    }
};

class NewYearParty {
private:
    Item * pItemArray;
    int tailPos;
    int dataSize;
public:
    NewYearParty(int m) {
        pItemArray = new Item [m];
        dataSize = m;
        tailPos = 0;
    }
    void prepare() {
        pItemArray[0].ID = 100;
        pItemArray[0].number = 7;
        pItemArray[1].ID = 150;
        pItemArray[1].number = 20;
        tailPos += 2;
    }
    //  add code
    int calSalary() {
        
    }
    
    void print() {
        int tid;
        cin >> tid;
        for (int i = 0; i < dataSize; i++) {
            if (pItemArray[i].ID == tid) {
                cout << pItemArray[i].number;
            }
        }
        return;
    }
    ~NewYearParty() {
        if (pItemArray != NULL) {
            delete [] pItemArray;
        }
    }
};

int main() {
    int b;
    cin >> b;
    NewYearParty xqianParty(b + 2);
    xqianParty.prepare();
    for (int i = 0; i < b; i++) {
        xqianParty++;
    }
    cout << xqianParty.calSalary() << endl;
    xqianParty.print();
    return 0;
}
