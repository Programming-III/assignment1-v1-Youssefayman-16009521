#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
Class Bird:public Animal{
private:
    float wingSpan;
public :
    Bird();
    Bird(float wingSpan);
    ~Bird();
};


#endif // BIRD_H_INCLUDED

