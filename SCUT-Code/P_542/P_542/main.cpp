//
//  main.cpp
//  P_542 3.16 Target-Heart-Rate Calculator
//
//  Created by Rain Chen on 2022/1/26.
//

#include <iostream>
#include <string>

using namespace std;

class HeartRates {
public:
    HeartRates(string f, string l, int m, int d, int y) {
        first = f;
        last = l;
        month = m;
        day = d;
        year = y;
        cin >> cmonth >> cday >> cyear;
    }
    string getFirstName() {
        return first;
    }
    string getLastName() {
        return last;
    }
    int getBirthMonth() {
        return month;
    }
    int getBirthDay() {
        return day;
    }
    int getBirthYear() {
        return year;
    }
    int getAge() {
        age = cyear - year;
        if (cmonth < month) {
            age -= 1;
        } else if (cmonth == month) {
            if (cday < day) {
                age -= 1;
            }
        }
        return age;
    }
    int getMaximumHeartRate() {
        return 220 - age;
    }
    int getMinimumTargetHeartRate() {
        return 0.5 * (220 - age);
    }
    int getMaximumTargetHeartRate() {
        return 0.85 * (220 - age);
    }
private:
    string first, last;
    int month, day, year;
    int cmonth, cday, cyear;
    int age;
};

int main() {
    string first, last;
    int month, day, year;
    cin >> first >> last;
    cin >> month >> day >> year;
    HeartRates heartRates(first, last, month, day, year);
    cout << "First Name: " << heartRates.getFirstName() << "\n";
    cout << "Last Name: " << heartRates.getLastName() << "\n";
    cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
    << heartRates.getBirthDay() << "/"
    << heartRates.getBirthYear() << "\n";
    cout << "Age: " << heartRates.getAge() << "\n";
    cout << "Maximum Heart Rate: "
    << heartRates.getMaximumHeartRate() << "\n";
    cout << "Target Heart Rate: "
    << heartRates.getMinimumTargetHeartRate() << "-"
    << heartRates.getMaximumTargetHeartRate() << "\n";
    return 0;
}
