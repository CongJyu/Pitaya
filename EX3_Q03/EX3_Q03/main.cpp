//
//  main.cpp
//  EX3_Q03
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
void judge(int);
int main()
{
    float mon = 0.0, dis = 0.0;
    char ch;
    int i = 0;
    std::cin >> mon >> ch >> dis;
    if (mon >= 5000)
        i++;
    if (ch == 'y')
        i++;
    if (dis <= 2000)
        i++;
    judge(i);
    return 0;
}
void judge(int n)
{
    using namespace std;
    switch(n)
    {
        case 0:
            cout << "Refuse" << endl;
            break;
        case 1:
            cout << "Refuse" << endl;
            break;
        case 2:
            cout << "Accept" << endl;
            break;
        default:
            cout << "Accept" << endl;
    }
}
