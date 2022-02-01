//
//  main.cpp
//  P_543 3.17 Computerization of Health Records
//
//  Created by Rain Chen on 2022/1/26.
//

#include <iostream>
#include <string>

using namespace std;

class HealthProfile {
public:
    HealthProfile(string f, string l, char g, int m, int d, int y, int h, int w) {
        first = f;
        last = l;
        gender = g;
        month = m;
        day = d;
        year = y;
        height = h;
        weight = w;
        cin >> cmonth >> cday >> cyear;
    }
    string getFirstName() {
        return first;
    }
    string getLastName() {
        return last;
    }
    char getGender() {
        return gender;
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
    int getHeight() {
        return height;
    }
    int getWeight() {
        return weight;
    }
    int getAge() {
        age = cyear - year;
        if (cmonth < month) {
            age -= 1;
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
    double getBodyMassIndex() {
        return (weight * 703) / (height * height);
    }
private:
    int month, day, year;
    int height, weight;
    char gender;
    string first, last;
    int cmonth, cday, cyear;
    int age;
};

int main() {
    string first, last;
    int month, day, year;
    int height, weight;
    char gender;
    
    cin >> first >> last;
    cin >> gender;
    cin >> month >> day >> year;
    cin >> height >> weight;
    
    HealthProfile profile(first, last, gender, month, day, year, height, weight);
    cout << "First Name: " << profile.getFirstName() << "\n";
    cout << "Last Name: " << profile.getLastName() << "\n";
    cout << "Gender: " << profile.getGender() << "\n";
    cout << "Date of Birth: " << profile.getBirthMonth() << "/"
    << profile.getBirthDay() << "/"
    << profile.getBirthYear() << "\n";
    cout << "Height (inches): " << profile.getHeight() << "\n";
    cout << "Weight (pounds): " << profile.getWeight() << "\n";
    cout << "Age: " << profile.getAge() << "\n";
    cout << "Maximum Heart Rate: "
    << profile.getMaximumHeartRate() << "\n";
    cout << "Target Heart Rate: "
    << profile.getMinimumTargetHeartRate() << "-"
    << profile.getMaximumTargetHeartRate() << "\n";
    cout << "Body Mass Index: " << profile.getBodyMassIndex() << "\n\n";
    return 0;
}
