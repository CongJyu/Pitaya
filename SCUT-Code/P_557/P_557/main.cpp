//
//  main.cpp
//  P_557
//
//  Created by cyrain on 2021/10/17.
//

//#include <iostream>
//#include <algorithm>
//
//int a[100] = {0};
//
//void large(int);
//int main()
//{
//    for (int i = 0; i <= 100; ++i)
//    {
//        std::cin >> a[i];
//        if (a[i] < 0)
//        {
//            break;
//        }
//    }
//    for (int j = 0; j <= 100; j += 10)
//    {
//        if (a[j] > 0)
//        {
//            large(j);
//        }
//    }
//    return 0;
//}
//
//void large(int n)
//{
//    using namespace std;
//    sort(a + n, a + n + 10);
//    cout << "Largest is " << a[n + 9] << endl;
//}

#include <iostream>
int main()
{
    using namespace std;
    int number = 0, n;
    cin >> n;
    if (n > -2 && n < 101)
        number = n;
    int largest = number;
    while (number != -1)
    {
        int counter = 1;
        while (counter < 10)
        {
            cin >> n;
            if (n > -2 && n < 101)
                number = n;
            if (number > largest)
                largest = number;
            counter += 1;
        }
        cout << "Largest is " << largest << endl;
        cin >> n;
        if (n > -2 && n < 101)
            number = n;
        largest = number;
    }
    return 0;
}
