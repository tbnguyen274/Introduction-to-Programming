#include "Student.h"

void inputStudent(Student& stu) {
	cout << "Nhap ma so sinh vien: ";
	cin.ignore();
	cin.get(stu.id, 101);
	cin.ignore();

	cout << "Nhap ho va ten: ";
	cin.get(stu.fullName, 101);

	cout << "Nhap diem trung binh: ";
	cin >> stu.GPA;
	cin.ignore();

	cout << "Nhap dia chi: ";
	cin.get(stu.address, 101);

	cout << "Nhap ngay sinh: " << endl;
	inputDate(stu.dob);
}

void outputStudent(Student stu) {
	cout << "Ma so sinh vien: " << stu.id << endl;
	cout << "Ho va ten: " << stu.fullName << endl;
	cout << "GPA: " << fixed << setprecision(1) << stu.GPA << endl;
	cout << "Dia chi: " << stu.address << endl;
	cout << "Ngay sinh: ";
	outputDate(stu.dob);
}

void extractFirstAndLastName(Student stu, char firstName[], char lastName[]) {
	int i = 0;
	int j = 0;

	while (stu.fullName[i] != ' ') {
		firstName[j] = stu.fullName[i];
		j++;
		i++;
	}
	firstName[j] = '\0';

	// Skip the space between first and last name
	i++;

	j = 0;
	while (stu.fullName[i] != '\0') {
		lastName[j] = stu.fullName[i];
		j++;
		i++;
	}
	lastName[j] = '\0';
}

void calculateAge(Student stu, int& years, int& months, int& days) {
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	int currentYear = timePtr->tm_year + 1900 - stu.dob.year;
	int currentMonth = timePtr->tm_mon + 1;
	int currentDay = timePtr->tm_mday;

	years = currentYear - stu.dob.year;
	months = currentMonth - stu.dob.month;
	days = currentDay - stu.dob.day;

	if (days < 0) {
		months--;
		Date temp = { currentDay, currentMonth - 1, currentYear };
		days += numDaysOfMonth(temp);
	}
	if (months < 0) {
		years--;
		months += 12;
	}
}

void outputStudentFormatted(Student stu, char firstName[], char lastName[]) {
	cout << "Ma so sinh vien: " << stu.id << endl;
	cout << "Ho: " << lastName << endl;
	cout << "Ten: " << firstName << endl;
	cout << "GPA: " << fixed << setprecision(1) << stu.GPA << endl;
	cout << "Dia chi: " << stu.address << endl;
	cout << "Ngay sinh: ";
	outputDate(stu.dob);

	int years, months, days;
	calculateAge(stu, years, months, days);

	cout << "Tuoi: " << years << " nam " << months << " thang " << days << " ngay" << endl;
}

void extractStudentClass(Student stu, char stuClass[]) {
	stuClass[0] = 'K';
	stuClass[1] = stu.id[0];
	stuClass[2] = stu.id[1];
	stuClass[3] = '\0';
}

int compareByID(Student stu1, Student stu2) {
	int comparison = strcmp(stu1.id, stu2.id);

	if (comparison > 0) {
		return 1;
	}
	else if (comparison < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int compareByGPAThenID(Student stu1, Student stu2) {
	if (stu1.GPA > stu2.GPA) {
		return 1;
	}
	else if (stu1.GPA < stu2.GPA) {
		return -1;
	}
	else {
		// If GPAs are equal, compare IDs
		int comparison = strcmp(stu1.id, stu2.id);
		if (comparison > 0) {
			return 1;
		}
		else if (comparison < 0) {
			return -1;
		}
		else {
			return 0;  
		}
	}
}

int compareByNameThenID(Student stu1, Student stu2) {
	int comparison = strcmp(stu1.fullName, stu2.fullName);

	if (comparison > 0) {
		return 1;
	}
	else if (comparison < 0) {
		return -1;
	}
	else {
		// If names are the same, compare IDs
		comparison = strcmp(stu1.id, stu2.id);

		if (comparison > 0) {
			return 1;
		}
		else if (comparison < 0) {
			return -1;
		}
		else {
			return 0;
		}
	}
}

int compareByFirstNameThenID(Student stu1, Student stu2, char stu1FirstName[], char stu2FirstName[]) {
	int comparison = strcmp(stu1FirstName, stu1FirstName);

	if (comparison > 0) {
		return 1;
	}
	else if (comparison < 0) {
		return -1;
	}
	else {
		// If first name are the same, compare IDs
		comparison = strcmp(stu1.id, stu2.id);

		if (comparison > 0) {
			return 1;
		}
		else if (comparison < 0) {
			return -1;
		}
		else {
			return 0;
		}
	}
}

int compareByLastNameThenID(Student stu1, Student stu2, char stu1LastName[], char stu2LastName[]) {
	int comparison = strcmp(stu1LastName, stu2LastName);

	if (comparison > 0) {
		return 1;
	}
	else if (comparison < 0) {
		return -1;
	}
	else {
		// If last name are the same, compare IDs
		comparison = strcmp(stu1.id, stu2.id);

		if (comparison > 0) {
			return 1;
		}
		else if (comparison < 0) {
			return -1;
		}
		else {
			return 0;
		}
	}
}

int compareByDOBThenID(Student stu1, Student stu2) {
	if (stu1.dob.year > stu2.dob.year) {
		return 1;
	}
	else if (stu1.dob.year < stu2.dob.year) {
		return -1;
	}
	else {
		if (stu1.dob.month > stu2.dob.month) {
			return 1;
		}
		else if (stu1.dob.month < stu2.dob.month) {
			return -1;
		}
		else {
			if (stu1.dob.day > stu2.dob.day) {
				return 1;
			}
			else if (stu1.dob.day < stu2.dob.day) {
				return -1;
			}
			else {
				// If birthdays are the same, compare IDs
				int comparison = strcmp(stu1.id, stu2.id);

				if (comparison > 0) {
					return 1;
				}
				else if (comparison < 0) {
					return -1;
				}
				else {
					return 0;
				}
			}
		}
	}
}