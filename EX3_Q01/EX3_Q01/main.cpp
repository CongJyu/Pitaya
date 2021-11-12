//
//  main.cpp
//  EX3_Q01
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
int main()
{
    using namespace std;
    int n = 0;
    cin >> n;
    int o3, o5, o7;
    o3 = n % 3;
    o5 = n % 5;
    o7 = n % 7;
    if (o3 == 0 && o5 == 0 && o7 == 0)
    {
        cout << "It's divisible by 3,5,7\n";
    }
    else if (o3 == 0 && o5 == 0 && o7 != 0)
    {
        cout << "It's divisible by 3,5\n";
    }
    else if (o3 == 0 && o5 != 0 && o7 == 0)
    {
        cout << "It's divisible by 3,7\n";
    }
    else if (o3 != 0 && o5 == 0 && o7 == 0)
    {
        cout << "It's divisible by 5,7\n";
    }
    else if (o3 != 0 && o5 != 0 && o7 == 0)
    {
        cout << "It's divisible by 7\n";
    }
    else if (o3 != 0 && o5 == 0 && o7 != 0)
    {
        cout << "It's divisible by 5\n";
    }
    else if (o3 == 0 && o5 != 0 && o7 != 0)
    {
        cout << "It's divisible by 3\n";
    }
    else
    {
        cout << "null\n";
    }
    return 0;
}
