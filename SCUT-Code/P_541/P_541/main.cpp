//
//  main.cpp
//  P_541 3.15 Date Class
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
public:
    Date(int m, int d, int y) {
        if (m > 12 || m < 1) {
            m = 1;
        }
        month = m;
        day = d;
        year = y;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }
    int getYear() {
        return year;
    }
    void displayDate() {
        cout << month << "/" << day << "/" << year << endl;
    }
    void setMonth(int input) {
        while (input > 12 || input < 1) {
            input = 1;
        }
        month = input;
    }
    void setDay(int input) {
        day = input;
    }
    void setYear(int input) {
        year = input;
    }
};

int main() {
    int day, month, year;
    cin >> day >> month >> year;
    Date date(month, day, year); // create a Date object for May 6, 1981

    // display the values of the three Date data members
    cout << "Month: " << date.getMonth() << endl;
    cout << "Day: " << date.getDay() << endl;
    cout << "Year: " << date.getYear() << endl;

    date.displayDate(); // output the Date as 5/6/1981

    // modify the Date
    cin >> day >> month >> year;
    date.setMonth(month); // invalid month
    date.setDay(day);
    date.setYear(year);

    date.displayDate(); // output the modified date (1/1/2005)
}
