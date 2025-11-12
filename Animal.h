#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
Class Animal{
    private:
string name;
int age;
bool isHungry;
    public:
        Animal();
        Animal(string name,int age,bool isHungry);
        ~Animal();
        void display();
        void feed();

};



#endif // ANIMAL_H_INCLUDED
