#include "../include/Student.hpp"

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