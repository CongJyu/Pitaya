// p0312

#include <iostream>
#include <map>

using namespace std;

string get_tzolkin_day_name[21]{
        "ahau", "imix", "ik", "akbal", "kan",
        "chicchan", "cimi", "manik", "lamat", "muluk",
        "ok", "chuen", "eb", "ben", "ix",
        "mem", "cib", "caban", "eznab", "canac",
        "ahau"
};

map<string, int> haab_month_day{
        {"pop",    0},
        {"no",     20},
        {"zip",    40},
        {"zotz",   60},
        {"tzec",   80},
        {"xul",    100},
        {"yoxkin", 120},
        {"mol",    140},
        {"chen",   160},
        {"yax",    180},
        {"zac",    200},
        {"ceh",    220},
        {"mac",    240},
        {"kankin", 260},
        {"muan",   280},
        {"pax",    300},
        {"koyab",  320},
        {"cumhu",  340},
        {"uayet",  360}
};

int main() {
    ios::sync_with_stdio(false);
    int day_from_creation, haab_day, haab_month, haab_year{};
    int n{}, tzolkin_name, tzolkin_number, tzolkin_year;
    string month_name, day_str, temp_str;
    cin >> n;
    while (n--) {
        cin >> temp_str >> haab_year;
        size_t pos{temp_str.find('.')};
        day_str = temp_str.substr(0, pos);
        month_name = temp_str.substr(pos + 1);
        haab_month = haab_month_day[month_name];
        haab_day = stoi(day_str);
        day_from_creation = haab_year * 365 + haab_month + haab_day;
        tzolkin_year = day_from_creation / 260;
        day_from_creation %= 260;
        tzolkin_number = day_from_creation % 13 + 1;
        if (tzolkin_number > 13) {
            tzolkin_number = 1;
        }
        tzolkin_name = day_from_creation % 20;
        cout << tzolkin_number << " " << get_tzolkin_day_name[tzolkin_name + 1] << " " << tzolkin_year << endl;
    }
    return 0;
}
