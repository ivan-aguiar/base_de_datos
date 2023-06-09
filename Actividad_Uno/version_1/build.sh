#!/bin/bash

## Compilo código objeto

g++ -Wall -std=c++11 -c ./src/Student.cpp
g++ -Wall -std=c++11 -c ./src/Course.cpp
g++ -Wall -std=c++11 -c ./src/AttendanceManagement.cpp
g++ -Wall -std=c++11 -c main.cpp

## Compilo el binario
g++ Student.o Course.o AttendanceManagement.o main.o -o attendance_management.bin

##Limpio los códigos objeto
rm ./*.o