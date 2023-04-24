#ifndef ATTENDANCE_MANAGEMENT_H
#define ATTENDANCE_MANAGEMENT_H

#include <iostream>
#include <fstream>
#include <string>
#include "Student.hpp"
#include "Course.hpp"

using namespace std;

class AttendanceManagement{
    private:

    public:
        AttendanceManagement(); //Constructor
        virtual ~AttendanceManagement(); //Destructor

        void takeAttendance(Student *student, Course *course, string datetime, bool state);
        void showAttendance();
};

#endif