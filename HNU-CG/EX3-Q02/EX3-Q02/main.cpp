//
//  main.cpp
//  EX3-Q02
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
void judge(int);
int main() {
    int s = 0;
    std::cin >> s;
    judge(s);
    return 0;
}
void judge(int n) {
    using namespace std;
    if (n >= 90)
        cout << "A" << endl;
    else if (n >= 80 && n < 90)
        cout << "B" << endl;
    else if (n >= 70 && n < 80)
        cout << "C" << endl;
    else if (n >= 60 && n < 70)
        cout << "D" << endl;
    else
        cout << "E" << endl;
}
