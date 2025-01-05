#define _CRT_SECURE_NO_DEPRECATE
#include "Date.h"
#include <string.h>
#include <ctime>

struct Student
{
	char id[50];
	char fullName[100];
	float GPA;
	char address[100];
	Date dob;
};

// 15. Input a student.
void inputStudent(Student& stu);

// 16. Output a student.
void outputStudent(Student stu);

/* 
17. Output a student: id, first name (first word), last name (remaining words), gpa, address, dob,
age (18 year 2 months, 2 days).
*/
void extractFirstAndLastName(Student stu, char firstName[], char lastName[]);
void calculateAge(Student stu, int& years, int& months, int& days);
void outputStudentFormatted(Student stu, char firstName[], char lastName[]);

// 20. Extract the class of input student. For example, if your id is 19127001, you are in K19 class.
void extractStudentClass(Student stu, char stuClass[]);

// 21. Compare 2 students by id.
int compareByID(Student stu1, Student stu2);

// 22. Compare 2 students by gpa then id.
int compareByGPAThenID(Student stu1, Student stu2);

// 23. Compare 2 students by name then id.
int compareByNameThenID(Student stu1, Student stu2);

// 24. Compare 2 students by first name then id.
int compareByFirstNameThenID(Student stu1, Student stu2, char stu1FirstName[], char stu2FirstName[]);

// 25. Compare 2 students by last name then id.
int compareByLastNameThenID(Student stu1, Student stu2, char stu1LastName[], char stu2LastName[]);

// 26. Compare 2 students by dob then id.
int compareByDOBThenID(Student stu1, Student stu2);