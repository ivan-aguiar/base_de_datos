#!/bin/bash

## Compilo código objeto

g++ -Wall -std=c++11 -c main.cpp

## Compilo el binario
g++ main.o

##Limpio los códigos objeto
rm ./*.o