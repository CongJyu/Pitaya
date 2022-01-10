//
//  main.cpp
//  P_565 5.22 De Morgan’s Laws
//
//  Created by Rain Chen on 2022/1/9.
//  Something wrong

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    char part;
//    cout << boolalpha;
//    while (true) {
//        cin >> part;
//        if (part == 'e') {
//            break;
//        }
//        if (part == 'a') {
//            // Prove part (a)
//            // condition1: (x < 5), condition2: (y >= 7)
//            int x;
//            int y;
//            cin >> x >> y;
//            cout << "(x < 5): " << (x < 5) << endl;
//            cout << "(y >= 7): " << (y >= 7) << endl;
//            // test for validity
//            if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7))))
//                cout << "!(x < 5) && !(y >= 7) is equivalent to"
//                << " !((x < 5) || (y >= 7))" << endl;
//            else
//                cout << "!(x < 5) && !(y >= 7) is not equivalent to"
//                << " !((x < 5) || (y >= 7))" << endl;
//            cout << endl;
//        }
//        if (part == 'b') {
//            // Prove part (b)
//            int a;
//            int b;
//            int g;
//            cin >> a >> b >> g;
//            cout << "(a == b): " << (a == b) << endl;
//            cout << "(g != 5): " << (g != 5) << endl;
//            // test for validity
//            if ((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))
//                cout << "!(a == b) || !(g != 5) is equivalent to"
//                << " !((a == b) && (g != 5))" << endl;
//            else
//                cout << "!(a == b) || !(g != 5) is not equivalent to"
//                << " !((a == b) && (g != 5))" << endl;
//            cout << endl;
//        }
//        if (part == 'c') {
//            // Prove part (c)
//            int x;
//            int y;
//            cin >> x >> y;
//            cout << "(x <= 8): " << (x <= 8) << endl;
//            cout << "(y > 4): " << (y > 4) << endl;
//            // test for validity
//            if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4)))
//                cout << "!((x <= 8) && (y > 4)) is equivalent to"
//                << " !(x <= 8) || !(y > 4)" << endl;
//            else
//                cout << "!((x <= 8) && (y > 4)) is not equivalent to"
//                << " !(x <= 8) || !(y > 4)" << endl;
//            cout << endl;
//        }
//        if (part == 'd') {
//            // Prove part (d)
//            int i;
//            int j;
//            cin >> i >> j;
//            cout << "(i > 4): " << (j > 4) << endl;
//            cout << "(j <= 6): " << (j <= 6) << endl;
//            // test for validity
//            if ((!((i > 4) || (j <= 6))) == (!(i > 4) && !(j <= 6)))
//                cout << "!((i > 4) || (j <= 6)) is equivalent to"
//                << " !(i > 4) && !(j <= 6)" << endl;
//            else
//                cout << "!((i > 4) || (j <= 6)) is not equivalent to"
//                << " !(i > 4) && !(j <= 6)" << endl;
//            cout << endl;
//        }
//    }
//} // end main

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char part;
    cout << boolalpha;
    while (true) {
        cin >> part;
        if (part == 'e') {
            break;
        }
        if (part == 'a') {
            int x;
            int y;
            cin >> x >> y;
            cout << "(x < 5): " << (x<5) << endl;
            cout << "(y >= 7): " << (y>=7) << endl;
            // test for validity
            if (( !( x < 5 ) && !( y >= 7 ) ) ==
                ( !( ( x < 5 ) || ( y >= 7 ) ) ) )
                cout << "!(x < 5) && !(y >= 7) is equivalent to"
                << " !((x < 5) || (y >= 7))" << endl;
            else
                cout << "!(x < 5) && !(y >= 7) is not equivalent to"
                << " !((x < 5) || (y >= 7))" << endl;
            cout << endl;
        }
        if (part == 'b') {
            // Prove part (b)
            int a;
            int b;
            int g;
            cin >> a >> b >> g;
            cout << "(a == b): " << (a == b) << endl;
            cout << "(g != 5): " << (g != 5) << endl;
            // test for validity
            if ((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))
                cout << "!(a == b) || !(g != 5) is equivalent to"
                << " !((a == b) && (g != 5))" << endl;
            else
                cout << "!(a == b) || !(g != 5) is not equivalent to"
                << " !((a == b) && (g != 5))" << endl;
            cout << endl;
        }
        if (part == 'c') {
            int x;
            int y;
            cin >> x >> y;
            cout << "(x <= 8): " << (x <= 8) << endl;
            cout << "(y > 4): " << (y > 4) << endl;
            // test for validity
            if (!((x <= 8) && (y > 4)) == (!(x <= 8) || !(y > 4)))
                cout << "!((x <= 8) && (y > 4)) is equivalent to"
                << " !(x <= 8) || !(y > 4)" << endl;
            else
                cout << "!((x <= 8) && (y > 4)) is not equivalent to"
                << " !(x <= 8) || !(y > 4)" << endl;
            cout << endl;
        }
        if (part == 'd') {
            // Prove part (d)
            int i;
            int j;
            cin >> i >> j;
            cout << "(i > 4): " << (i > 4) << endl;
            cout << "(j <= 6): " << (j <= 6) << endl;
            if (!((i > 4) || (j <= 6)) == (!(i > 4) && !(j <= 6)))
                cout << "!((i > 4) || (j <= 6)) is equivalent to"
                << " !(i > 4) && !(j <= 6)" << endl;
            else
                cout << "!((i > 4) || (j <= 6)) is not equivalent to"
                      << " !(i > 4) && !(j <= 6)" << endl;
                cout << endl;
        }
    }
} // end main
