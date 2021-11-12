//
//  main.cpp
//  HW2_LB2_Q01
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    int a = 0, b = 0;
    double out = 0.0;
    cin >> a >> b;
    out = (a / 1.0) / (b / 1.0);
    cout << fixed << setprecision(9) << out << endl;
    return 0;
}
