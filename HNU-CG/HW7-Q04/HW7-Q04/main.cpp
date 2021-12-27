//
//  main.cpp
//  HW7-Q04 结构体实现约瑟夫环
//
//  Created by Rain Chen on 2021/12/12.
//  Something wrong here

#include <iostream>
using namespace std;

struct Jose {
    int code;
    Jose * next;
};

int main() {
    int nBoys, interval;
    cin >> nBoys >> interval;
    Jose * pJose = new Jose;
    Jose * temp = pJose;
    for (int i = 0; i < nBoys; i++) {
        pJose -> code = i + 1;
        if (i == nBoys - 1) {
            break;
        }
        pJose -> next = new Jose;
        pJose = pJose -> next;
    }
    pJose -> next = temp;
    pJose = pJose -> next;
    for (int i = 0; i < nBoys - 1; i++) {
        for (int j = 0; j < interval - 2; j++) {
            pJose = pJose -> next;
        }
        temp = pJose -> next -> next;
        delete pJose -> next;
        pJose -> next = temp;
        pJose = pJose -> next;
    }
    cout << pJose -> code;
    delete pJose;
}
