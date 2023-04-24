#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

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

#endif