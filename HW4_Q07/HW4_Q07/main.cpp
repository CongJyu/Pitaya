//
//  main.cpp
//  HW4_Q07 两倍
//
//  Created by cyrain on 2021/10/19.
//

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cin >> n;
    int a[n];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if ((a[j] / 1.0) / (a[k] / 1.0) == 2)
                counter++;
        }
    }
    cout << counter << endl;
}
