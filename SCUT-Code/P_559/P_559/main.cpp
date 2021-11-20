//
//  main.cpp
//  P_559
//
//  Created by cyrain on 2021/10/17.
//

#include <iostream>
int main()
{
    using namespace std;
    int a[200];
    int counter = 0;
    for (int i = 0; i < 200; i += 2)
    {
        cin >> a[i];
        if (a[i] == -1)
            break;
        cin >> a[i + 1];
        counter += 2;
    }
    int sum = 0;
    for (int j = 0; j < counter; j += 2)
    {
        for (int k = a[j]; k <= a[j + 1]; k++)
        {
            sum = sum + k;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
