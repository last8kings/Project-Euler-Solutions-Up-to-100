#include <bits/stdc++.h>
using namespace std;


int main() {

    int SundayCnt = 0, DayOfWeek = 3; // 0 = Sunday, 1 = Monday, etc...
    vector<int> DaysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int year = 1901; year <= 2000; ++year) {
        bool IsLeapYear = (year % 4 == 0);
        for (int month = 1; month <= 12; ++month) {
            if (DayOfWeek == 0) SundayCnt++;
            DayOfWeek += DaysInMonth[month] + (month == 2 && IsLeapYear);
            DayOfWeek %= 7;
        }
    }

    cout << SundayCnt;

} 
