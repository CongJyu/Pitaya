//
//  main.cpp
//  P_551 Tutorial 2.3 Credit Limits
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    int account;
    float balance;
    float charges;
    float credits;
    float credit_limits;
    while (true) {
        cin >> account;
        if (account == -1) {
            break;
        }
        cin >> balance >> charges >> credits >> credit_limits;
        float newbalance = balance + charges - credits;
        if (newbalance > credit_limits) {
            cout << "New balance is " << newbalance << endl;
            cout << "Account: " << account << endl;
            cout << "Credit limit: " << credit_limits << endl;
            cout << "Credit Limit Exceeded." << endl;
        } else {
            cout << "New balance is " << newbalance << endl;
        }
    }
    return 0;
}
