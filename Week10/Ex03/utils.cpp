#include "utils.h"

void inputDate(Date& date)
{
	cout << "Nhap ngay: ";
	cin >> date.day;

	cout << "Nhap thang: ";
	cin >> date.month;

	cout << "Nhap nam: ";
	cin >> date.year;
}

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int numDaysOfMonth(Date date) {
	int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear(date.year)) {
		daysOfMonth[1] = 29;
	}

	return daysOfMonth[date.month - 1];
}

bool isValidDate(Date date) {
	if (date.month < 1 || date.month > 12) {
		return false;
	}

	int maxDay = numDaysOfMonth(date);
	if (date.day < 1 || date.day > maxDay) {
		return false;
	}

}

void outputDate(Date date)
{
	cout << setw(2) << setfill('0') << date.day << "/"
		<< setw(2) << setfill('0') << date.month << "/"
		<< setw(4) << setfill('0') << date.year << endl;
}

Date findNextDay(Date date) {
	int daysOfMonth = numDaysOfMonth(date);
	date.day++;

	if (date.day > daysOfMonth) {
		date.day = 1;
		date.month++;
		if (13 == date.month) {
			date.month = 1;
			date.year++;
		}
	}

	return date;

}