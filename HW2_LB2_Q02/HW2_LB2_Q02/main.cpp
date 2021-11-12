//
//  main.cpp
//  HW2_LB2_Q02
//
//  Created by cyrain on 2021/10/9.
//

#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    float r1 = 0.0, r2 = 0.0, out = 0;
    cin >> r1 >> r2;
    out = (r1 * r2) / (r1 + r2);
    cout << fixed << setprecision(2) << out;
    cout << endl;
    return 0;
}
