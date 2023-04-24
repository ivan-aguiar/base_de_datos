#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Declaración de Clases

class Student{

    private:
        int _identifier;
        string _name;
        string _surname;

    public:
        Student(); //Constructor
        virtual ~Student(); //Destructor

        //GETTERS
        int getIdentifier() const;
        string getName();
        string getSurname();

        //SETTERS
        void setIdentifier(int identifier);
        void setName(string name);
        void setSurname(string surname);

};

class Course{

    private:
        int _identifier;
        string _name;

    public:
        Course(); //Constructor
        virtual ~Course(); //Destructor

        //GETTERS
        int getIdentifier() const;
        string getName() const;

        //SETTERS
        void setIdentifier(int identifier);
        void setName(string name);

};

class AttendanceManagement{
    private:

    public:
        AttendanceManagement(); //Constructor
        virtual ~AttendanceManagement(); //Destructor

        void takeAttendance(Student *student, Course *course, string datetime, bool state);
        void showAttendance();
};


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

// Declaración Course

Course::Course(){
}

Course::~Course(){
}

int Course::getIdentifier() const{
    return _identifier;
}

void Course::setIdentifier(int identifier){
    _identifier = identifier;
}

string Course::getName() const{
    return _name;
}
void Course::setName(string name){
    _name = name;
}

//Declaración Student

Student::Student(){
}

Student::~Student(){
}

int Student::getIdentifier() const{
    return _identifier;
}

void Student::setIdentifier(int identifier){
    _identifier = identifier;
}

string Student::getName(){
    return _name;
}
void Student::setName(string name){
    _name = name;
}

string Student::getSurname(){
    return _surname;
}

void Student::setSurname(string surname){
    _surname = surname;
}

//Declaración Attendance Management

AttendanceManagement::AttendanceManagement()
{ // Constructor
}

AttendanceManagement::~AttendanceManagement()
{ // Destructor
}

void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state)
{
    ifstream testOpenFile("attendance.csv");
    bool fileExists = testOpenFile.good();
    testOpenFile.close();

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app);
    if (!fileExists)
    {
        csvFile << "Id de Estudiante, "
                << "Nombre/s, "
                << "Apellido/s, "
                << "Id de Materia, "
                << "Nombre de Materia, "
                << "Marca temporal, "
                << "Presente\n";
    }
      
        csvFile << student->getIdentifier() << ", "
                << student->getName() << ", "
                << student->getSurname() << ", "
                << course->getIdentifier() << ", "
                << course->getName() << ", "
                << datetime << ", "
                << state << "\n";
        
        csvFile.close();
    }


void AttendanceManagement::showAttendance()
{
    ifstream csvFile("attendance.csv");
    if (csvFile.is_open())
        cout <<csvFile.rdbuf();
    csvFile.close();
}