//
//  main.cpp
//  P_627 Tutorial 8.1 Duplicate Elimination with array
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[30] = {0};
    for (int i = 0; i < 30; i++) {
        cin >> arr[i];
    }
    vector<int> out;
    vector<int>::iterator i;
    out.push_back(arr[0]);
    int mark = 0;
    for (int j = 0; j < 30; j++) {
        for (i = out.begin(); i != out.end(); i++) {
            if (*i == arr[j]) {
                mark = 1;
            }
        }
        if (mark == 1) {
            mark = 0;
            continue;
        } else {
            out.push_back(arr[j]);
            mark = 0;
        }
    }
    for (i = out.begin(); i != out.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}

//#include <iostream>
//int b[1002], t;
//int main() {while (std::cin >> t) if (!b[t]) std::cout << t << " ", b[t] = 1;}
