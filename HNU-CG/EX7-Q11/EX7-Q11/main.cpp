//
//  main.cpp
//  EX7-Q11 古老的语言
//
//  Created by Rain Chen on 2021/11/28.
//

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int main() {
//    string s;
//    cin >> s;
//    int len = (int)s.length();
//    char * str = new char [len];
//    bool fy = false;
//    bool yy = false;
//    for (int i = 0; i < len; i++) {
//        if (str[i] != 'a' && str[i] != 'e'
//            && str[i] != 'i' && str[i] != 'o'
//            && str[i] != 'u' && str[i] != 'n') {
//            fy = true;
//        } else {
//            yy = true;
//        }
//    }
//}

#include <iostream>
#include <string>
using namespace std;
bool fy(char a) {
    string b = "qwrtypsdfghjklzxcvbm";
    for (unsigned int i = 0; i < b.size(); i++) {
        if (a == b[i]) {
            return true;
        }
    }
    return false;
}
bool yy(char a) {
    string b = "uioae";
    for (unsigned int i = 0; i < b.size(); i++) {
        if (a == b[i]) {
            return true;
        }
    }
    return false;
}
int main() {
    string a;
    cin >> a;
    if (fy(a[a.size() - 1])) {
        cout << "NO" << endl;
        return 0;
    }
    for (unsigned int i = 0; i < a.size(); i++) {
        if (fy(a[i])) {
            if (fy(a[i + 1]) || a[i + 1] == 'n') {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
