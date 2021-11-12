//
//  main.cpp
//  HW4_Q04 中间数
//
//  Created by cyrain on 2021/10/19.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int bigger;
    int smaller;
    for (int i = 0; i < n; i++)
    {
        bigger = 0;
        smaller = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                bigger++;
            }
            else if (arr[i] < arr[j])
            {
                smaller++;
            }
        }
        if (smaller == bigger)
        {
            cout << arr[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
