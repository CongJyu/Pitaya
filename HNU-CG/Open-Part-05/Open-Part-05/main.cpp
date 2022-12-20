//
//  main.cpp
//  Open-Part-05 周老师打酒喝光回(递归)
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
using namespace std;
int buyDrinkWine(int a, int b, int c) {
    int k = 0;
    if (b == 0 || c == 0) {
        return 0;
    } else if (a == 0 && b == 1 && c == 1) {
        return 1;
    } else {
        if (a > 0) {
            k += buyDrinkWine(a - 1, b, c * 2);
        }
        if (b > 0) {
            k += buyDrinkWine(a, b - 1, c - 1);
        }
    }
    return k;
}
int main() {
    int shop, flower, wine;
    cin >> shop >> flower >> wine;
    int result = buyDrinkWine(shop, flower, wine);
    cout << result;
    return 0;
}
