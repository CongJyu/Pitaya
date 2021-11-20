//
//  main.cpp
//  EX3-Q08
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int ay, am, ad, by, bm, bd, cy, cm, cd;
    cin >> ay >> am >> ad;
    cin >> by >> bm >> bd;
    cin >> cy >> cm >> cd;
    // not sure
    if (ay > by) {    // A is larger
        if (cy < by) {
            cout << "CBA" << endl;
        } else if (cy > by && ay > cy) {
            cout << "BCA" << endl;
        } else if (cy > ay) {
            cout << "BAC" << endl;
        }
    } else {    // B is larger
        if (cy < ay) {
            cout << "CAB" << endl;
        } else if (cy > ay && by > cy) {
            cout << "ACB" << endl;
        } else if (cy > by) {
            cout << "ABC" << endl;
        }
    }
    return 0;
}
