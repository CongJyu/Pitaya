//
//  main.cpp
//  P_545 Tutorial 1.2 (Addition Class)
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;

class Addition {
public:
    Addition(int x, int y) {
        a = x;
        b = y;
    }
    int showAddition() {
        return a + b;
    }
private:
    int a;
    int b;
};

int main() {
    int a, b;
    cin >> a >> b;
    Addition add(a, b);
    cout << add.showAddition() << endl;
    return 0;
}
