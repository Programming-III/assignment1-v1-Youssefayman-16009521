#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
Class Enclosure{
   private:
       Animal*animal;
       int Capacity;
       int currentCount;
   public:
    Enclosure();
    Enclosure(int Capacity,int currentCount);
    ~Enclosure();
    void addAnimal(Animal*a);
    void displayAnimals();
};


#endif // ENCLOSURE_H_INCLUDED
