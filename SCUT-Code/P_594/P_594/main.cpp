//
//  main.cpp
//  P_594
//
//  Created by cyrain on 2021/11/9.
//

#include <iostream>
using namespace std;

void square( int ); // function prototype

int main()
{
   unsigned int side = 0; // input side length
   while (true)
   {
      cin>> side;
      if (side == 0)
         break;
      square( side ); // display solid square of asterisks
      cout << endl;
   }
} // end main

void square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
