//
//  main.cpp
//  EX4-Q20 整数反转
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
#include <climits>
int reverse(int);
int main() {
    using namespace std;
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int fig = n % 10;
        n /= 10;
        if (rev > INT_MAX / 10 || rev == INT_MAX && fig > 7) {
            return 0;
        }
        if (rev < INT_MIN / 10 || rev == INT_MIN && fig < -8) {
            return 0;
        }
        rev = rev * 10 + fig;
    }
    return rev;
}

