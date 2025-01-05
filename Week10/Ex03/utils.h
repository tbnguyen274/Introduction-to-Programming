#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

void inputDate(Date& date);
void outputDate(Date date);
bool isLeapYear(int year);
int numDaysOfMonth(Date date);
bool isValidDate(Date date);
Date findNextDay(Date date);
