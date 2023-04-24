#include <iostream>
#include "./include/AttendanceManagement.hpp"
#include "./include/Student.hpp"
#include "./include/Course.hpp"

using namespace std;

int main(){
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");

    Student* student2 = new Student();
    student2->setIdentifier(2);
    student2->setName("Ahsoka");
    student2->setSurname("Tano");

    Course* course2 = new Course();
    course2->setIdentifier(2);
    course2->setName("Defense Against Dark Side");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "2021-06-08", true);
    attendanceManagement->takeAttendance(student2, course2, "22 BBY", true);
    attendanceManagement->showAttendance();


    delete student;
    delete course;
    delete attendanceManagement;


    return 0;
}