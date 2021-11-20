//
//  main.cpp
//  HW5-Q09 两数之和
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int length = 0, target = 0;
    cin >> length;
    const int size = length;
    int nums[size];
    for (int i = 0; i < length; i++) {
        cin >> nums[i];
    }
    cin >> target;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << " " << j << endl;
                return 0;
            } else {
                continue;
            }
        }
    }
    return 1;
}
