//
//  main.cpp
//  EX3_Q04
//
//  Created by cyrain on 2021/10/10.
//

#include <iostream>
void getMonth(int, int);
int main()
{
    using namespace std;
    int yy = 0, mm = 0;
    cin >> yy >> mm;
    getMonth(yy, mm);
    return 0;
}
void getMonth(int i, int j)
{
    using namespace std;
    switch (j)
    {
        case 1:
            cout << 31 << endl;
            break;
        case 2:
            if ((i % 4) == 0 && (i % 100) != 0)
            {
                cout << 29 << endl;
            }
            else if ((i % 400) == 0)
            {
                cout << 29 << endl;
            }
            else
            {
                cout << 28 << endl;
            }
            break;
        case 3:
            cout << 31 << endl;
            break;
        case 4:
            cout << 30 << endl;
            break;
        case 5:
            cout << 31 << endl;
            break;
        case 6:
            cout << 30 << endl;
            break;
        case 7:
            cout << 31 << endl;
            break;
        case 8:
            cout << 31 << endl;
            break;
        case 9:
            cout << 30 << endl;
            break;
        case 10:
            cout << 31 << endl;
            break;
        case 11:
            cout << 30 << endl;
            break;
        case 12:
            cout << 31 << endl;
            break;
        default:
            cout << "Error\n";
    }
}
