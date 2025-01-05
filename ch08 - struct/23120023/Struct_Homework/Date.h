#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

bool isLeapYear(int year);
int numDaysOfMonth(Date date);

// 1. Input a date
void inputDate(Date& date);

// 2. Output a date (yyyy-MM-dd).
void outputDate(Date date);

// 7. Find tomorrow: increase a date by 1 day.
Date findNextDay(Date date);

// 8. Find yesterday: decrease a date by 1 day.
Date findLastDay(Date date);

// 11. Compute the distance between input date vs 1/1/same year.
int distanceWithFirstDateOfYear(Date date);