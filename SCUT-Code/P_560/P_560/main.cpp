//
//  main.cpp
//  P_560
//
//  Created by cyrain on 2021/10/17.
//

#include <iostream>
int main()
{
    using namespace std;
    int num[100] = {0};
    int counter = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> num[i];
        if (num[i] == -1)
        {
            break;
        }
        counter++;
    }
    int y;
    for (int j = 0; j < counter; j++)
    {
        for (int x = 0; x <= num[j] - 1; x++)
        {
            for (y = 0; y < num[j] - x - 1; y++)
            {
                cout << ".";
            }
            for (int z = 0; z < num[j] - y; z++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
