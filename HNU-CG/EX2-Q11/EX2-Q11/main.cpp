//
//  main.cpp
//  EX2-Q11 老鼠爱大米
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    double b, s;
    std::cin >> b >> s;
    std::cout << std::fixed << std::setprecision(2) << b / 3 + s / 4 << std::endl;
    return 0;
}
