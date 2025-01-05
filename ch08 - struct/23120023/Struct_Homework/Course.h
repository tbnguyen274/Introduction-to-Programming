#include "Student.h"

struct Course
{
	char ID[50];
	char name[100];
	Student students[100];
	char status[10];
	int maxStudents;
	int minStudents;
	int currentStudents;
};


/*
29. Add a student to a course. 
Check the maximum number of students in the course condition.
*/
void addStudent(Course& course, Student student);

/*
30. Remove a student to a course. 
Check minimum number of students in the course to update the course status: open or close.
*/
void removeStudent(Course& course, char studentId[]);

int getCurrentMonth();

/*
31. Get the current date in your computer. 
Find all students who were born in this month.
*/
void findStudentsBornThisMonth(Course course);

// 35. Find a student by a given id.
void findStudentByID(Course course, char id[]);

// 37. Sort students by id.
void sortStudentByID(Course& course);