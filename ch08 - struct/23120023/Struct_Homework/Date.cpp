#include "Date.h"

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

void inputDate(Date& date) {
	do {
		cout << "Nhap nam: ";
		cin >> date.year;
	} while (date.year < 0);
	
	do {
		cout << "Nhap thang: ";
		cin >> date.month;
	} while (date.month < 1 || date.month > 12);
	
	do {
		cout << "Nhap ngay: ";
		cin >> date.day;
	} while (numDaysOfMonth(date) < date.day);
}

void outputDate(Date date) {
	cout << setw(4) << setfill('0') << date.year << "-"
		<< setw(2) << setfill('0') << date.month << "-"
		<< setw(2) << setfill('0') << date.day << endl;
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

Date findLastDay(Date date) {
	date.day--;

	if (date.day < 1) {
		
		if (1 == date.month) {
			date.month = 12;
			date.year--;
		}
		else {
			date.month--;
		}

		int daysOfMonth = numDaysOfMonth(date);
		date.day = daysOfMonth;
	}
	return date;
}

int distanceWithFirstDateOfYear(Date date) {
	int d = 0;

	while (1 != date.month) {
		d += date.day;
		date.month--;
		date.day = numDaysOfMonth(date);
	}
	if (1 == date.month) {
		d += date.day - 1;
	}
	
	return d;
}
