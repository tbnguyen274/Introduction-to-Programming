#include "Course.h"

void addStudent(Course& course, Student student) {
    int i = course.currentStudents;

    if (i < course.maxStudents) {
        course.students[i] = student;
        course.currentStudents++;

        cout << "Da them hoc sinh vao khoa hoc" << endl;

        if (course.currentStudents == course.maxStudents) {
            cout << "So luong hoc sinh trong khoa hoc da dat muc toi da" << endl;
        }
    }
    else {
        cout << "Khoa hoc da du hoc sinh, khong the them hoc sinh moi" << endl;
    }
}

void removeStudent(Course& course, char studentId[]) {
    bool check = false;

    // Find the student in course.students array
    for (int i = 0; i < course.currentStudents; i++) {
        if (strcmp(course.students[i].id, studentId) == 0) {

            // Remove the student from the course
            for (int j = i; j < course.currentStudents - 1; j++) {
                course.students[j] = course.students[j + 1];
            }

            // Clear the last student's information
            strcpy(course.students[course.currentStudents - 1].id, "");
            strcpy(course.students[course.currentStudents - 1].fullName, "");
            strcpy(course.students[course.currentStudents - 1].address, "");
            course.students[course.currentStudents - 1].GPA = 0;
            course.students[course.currentStudents - 1].dob = { 0,0,0 };

            course.currentStudents--;
            if (course.currentStudents < course.minStudents) {
                strcpy(course.status, "da dong");
            }
            else {
                strcpy(course.status, "dang mo");
            }

            check = true;
            break;
        }
    }

    if (check) {
		cout << "Da xoa hoc sinh ra khoi khoa hoc" << endl;
	}
    else {
        cout << "Khong tim thay hoc sinh trong khoa hoc" << endl;
    }
}

int getCurrentMonth() {
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    return (timePtr->tm_mon) + 1; // initaial months are 0-11
}

void findStudentsBornThisMonth(Course course) {
    int currentMonth = getCurrentMonth();
    int count = 0;

    for (int i = 0; i < course.currentStudents; i++) {
  
        if (currentMonth == course.students[i].dob.month) {
            cout << "Hoc sinh " << course.students[i].fullName << " co sinh nhat trong thang nay\n";
            count++;
        }
 
    }

    if (count == 0) {
		cout << "Khong co hoc sinh nao sinh nhat trong thang nay\n";
    }
}

void findStudentByID(Course course, char id[]) {
    for (int i = 0; i < course.currentStudents; i++) {
        if (0 == strcmp(course.students[i].id, id)) {
            cout << "Hoc sinh can tim la: " << course.students[i].fullName << endl;
        }
    }
}

void sortStudentByID(Course& course) {
    for (int i = 0; i < course.currentStudents - 1; i++) {
        for (int j = i + 1; j < course.currentStudents; j++) {
            if (strcmp(course.students[i].id, course.students[j].id) > 0) {
                // swap
                Student temp = course.students[i];
                course.students[i] = course.students[j];
                course.students[j] = temp;
            }
        }
    }
}