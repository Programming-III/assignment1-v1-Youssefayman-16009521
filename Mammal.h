#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
Class Mammal:public Animal{
    private:
string furColor;
public :
    Mammal();
    Mammal(string furColor);
    ~Mammal();
};


#endif // MAMMAL_H_INCLUDED
