//
//  main.cpp
//  P_539 3.12 Account Class
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;

class Account {
private:
    int balance;
public:
    Account(int init) {
        if (init < 0) {
            cout << "Error: Initial balance cannot be negative." << endl;
            balance = 0;
        } else {
            balance = init;
        }
    }
    void credit(int add) {
        balance += add;
    }
    void debit(int withdraw) {
        if (withdraw > balance) {
            cout << "Debit amount exceeded account balance." << endl;
        } else {
            balance -= withdraw;
        }
    }
    int getBalance() {
        return balance;
    }
}; // end class Account

int main() {
   int initialBalance_1;
   int initialBalance_2;
   cin >> initialBalance_1 >>initialBalance_2;
   Account account1( initialBalance_1 ); // create Account object
   Account account2( initialBalance_2 ); // create Account object

   int withdrawalAmount; // stores withdrawal amount read from user

   cin >> withdrawalAmount; // obtain user input
   account1.debit( withdrawalAmount ); // try to subtract from account1
   cout << "account1 balance: $" << account1.getBalance() << endl;

   cin >> withdrawalAmount; // obtain user input
   account2.debit( withdrawalAmount ); // try to subtract from account2
   cout << "account2 balance: $" << account2.getBalance() << endl;
} // end main
