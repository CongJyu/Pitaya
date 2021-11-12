//
//  main.cpp
//  HW3_Q04 打印一个金字塔
//
//  Created by cyrain on 2021/10/14.
//

#include <iostream>
#include <cstdio>
int main()
{
    using namespace std;
    int n;
    scanf("%d", &n);
    if (n < 1)
    {
        printf(" *");
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n - (i - 1); j++)
            {
                printf(" ");
            }
            for (int s = 1; s <= i;s++)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
    return 0;
}
