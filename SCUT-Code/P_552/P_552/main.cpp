//
//  main.cpp
//  P_552 4.24 Another Dangling-else Problem
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;
int main() {
    unsigned int x = 5;
    unsigned int y = 8;
    //  paart a
    if (y == 8) {
        if (x != 5) {
            cout << "#####" << endl;
        } else {
            cout << "@@@@@" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
    }
    cout << endl;
    //  part b
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@@" << endl;
        } else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
    }
    cout << endl;
    //  part c
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@@" << endl;
            cout << "&&&&&" << endl;
        } else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    }
    cout << endl;
    //  part d
    y = 7;
    if (y != 8) {
        if (x != 5) {
            cout << "@@@@@" << endl;
        } else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
    }
    return 0;
}
