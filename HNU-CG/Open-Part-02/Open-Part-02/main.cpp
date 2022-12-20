//
//  main.cpp
//  Open-Part-02 周老师分苹果(递归)
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int dif(int start, int end) {
    int i = 0;
    int a = 0;
    if (start == end || (start != 1 && start + 1 == end)) {
        return 0;
    }
    if (end % 2) {
        for (i = start; i <= end / 2; i++) {
            a++;
            a += dif(i + 1, end - i);
        }
    } else {
        for (i = start; i < end / 2; i++) {
            a++;
            a += dif(i + 1, end - i);
        }
    }
    return a;
}
int assignmentApples(int n) {
    return 1 + dif(1, n);
}
int main() {
    int n;
    cin >> n;
    int cnt = assignmentApples(n);
    cout << cnt << endl;
    return 0;
}
