//
//  main.cpp
//  P_549 Tutorial 2.1 Person Class
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person {
public:
    Person(string ls, string fs) {
        lname = ls;
        fname = fs;
    }
    void Show() const {
        cout << fname << " " << lname << endl;
    }
    void FormalShow() const {
        cout << lname << " " << fname << endl;
    }
private:
    string lname;
    string fname;
};

int main() {
    char judge;
    while (true) {
        cin >> judge;
        if (judge == 'n') {
            break;
        }
        string ls, fs;
        cin >> ls >> fs;
        {
            Person you(ls, fs);
            you.Show();
            you.FormalShow();
        }
    }
    return 0;
}
