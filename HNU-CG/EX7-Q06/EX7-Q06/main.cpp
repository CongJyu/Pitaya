//
//  main.cpp
//  EX7-Q06 杠杆
//
//  Created by Rain Chen on 2021/11/23.
//

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//void isBalance(string);
//int main() {
//    int n;
//    string s;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> s;
//        isBalance(s);
//    }
//    return 0;
//}
//void isBalance(string s) {
//    long long size = (long long)s.length();
//    char str[size];
//    strcpy(str, s.c_str());
//    int left = 0, leftcnt = 0, right = 0, rightcnt = 0;
//    for (int i = 0; i < size; i++) {
//        if (str[i] == '^') {
//            for (int j = i - 1; j >= 0; j--) {
//                if (str[j] == '=') {
//                    leftcnt++;
//                } else if (str[j] >= '0' && str[j] <= '9') {
//                    leftcnt++;
//                    left = left + (int)str[j] * leftcnt;
//                }
//            }
//            for (int k = i + 1; k <= size - 1; k++) {
//                if (str[k] == '=') {
//                    rightcnt++;
//                } else if (str[k] >= '0' && str[k] <= '9') {
//                    rightcnt++;
//                    right = right + (int)str[k] * rightcnt;
//                }
//            }
//        } else {
//            continue;
//        }
//    }
//    if (left == right) {
//        cout << "balance" << endl;
//    } else if (left > right) {
//        cout << "left" << endl;
//    } else if (left < right) {
//        cout << "right" << endl;
//    }
//    left = 0;
//    right = 0;
//    leftcnt = 0;
//    rightcnt = 0;
//    return;
//}

#include <iostream>
#include <string>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int pass = 0; pass < T; pass++) {
        string s;
        cin >> s;
        int x = int(s.find("^"));
        int left = 0, right = 0;
        for (int i = 0; i < x; i++) {
            if (s[i] != '=') {
                left += (s[i] - '0') * (x - i);
            }
        }
        for (int i = x + 1; i < int(s.length()); i++) {
            if (s[i] != '=') {
                right += (s[i] - '0') * (i - x);
            }
        }
        if (left > right) {
            cout << "left" << endl;
        } else if (left < right) {
            cout << "right" << endl;
        } else {
            cout << "balance" << endl;
        }
    }
    return 0;
}
