//
//  main.cpp
//  EX3_Q10
//
//  Created by cyrain on 2021/10/10.
//

#include <iostream>
int main()
{
    using namespace std;
    int weight = 0, distance = 0;
    float fee = 0;
    cin >> weight >> distance;
    if (distance < 250)
    {
        fee = weight * distance;
        cout << fee << endl;
    }
    else if (distance >= 250 && distance < 500)
    {
        fee = weight * distance * 0.98;
        cout << fee << endl;
    }
    else if (distance >= 500 && distance < 1000)
    {
        fee = weight * distance * 0.95;
        cout << fee << endl;
    }
    else if (distance >= 1000 && distance < 2000)
    {
        fee = weight * distance * 0.92;
        cout << fee << endl;
    }
    else if (distance >= 2000 && distance < 3000)
    {
        fee = weight * distance * 0.90;
        cout << fee << endl;
    }
    else
    {
        fee = weight * distance * 0.85;
        cout << fee << endl;
    }
    return 0;
}
