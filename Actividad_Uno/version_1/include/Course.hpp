#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

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

#endif