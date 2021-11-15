//
//  main.cpp
//  P_533
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int a = 0;
    cin >> a;
    const double pi = 3.14159;
    int diameter = 0;
    double circumference = 0;
    double area = 0;
    diameter = 2 * a;
    circumference = 2 * pi * a;
    area = pi * a * a;
    cout << "Diameter is " << diameter << endl;
    cout << "Circumference is " << circumference << endl;
    cout << "Area is " << area << endl;
    return 0;
}
