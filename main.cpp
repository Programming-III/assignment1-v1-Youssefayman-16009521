#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"

Animal::Animal(string name , int age,bool isHungry){
this->name=name;
this->age=age;
this->isHungry=isHungry;
}
Animal::Animal(){
name="no name";
age=0;
isHungry=true;
}
Animal::~Animal(){
}
void Animal:: display(){
cout<<name<<endl;
cout<<age<<endl;
cout<<isHungry<<endl
}
void Animal::feed(){
if(Animal.isHungry==true)
   isHungry=true;
   isHungry=false;
}
Mammal::Mammal():Animal(){
   furColor="black";
}
Mammal::Mammal(string furColor):Animal(string name, int age){
    this->furColor=furColor;
}
Mammal::~Mammal(){
}
Bird::Bird():Animal(){
   wingSpan=12.4;
}
Bird::Bird(float wingSpan):Animal(string name, int age){
    this->wingSpan=wingSpan;
}
Bird::~Bird(){
}
Reptile::Reptile():Animal(){
   isVenomous=true;
}
Reptile::Reptile(bool isVenomous):Animal(string name, int age){
    this->isVenomous=isVenomous;
}
Reptile::~Reptile(){
}
Enclosure::Enclosure(){
Capacity=0;
currentCount=0;
animal=new Animal[Capacity];
}
Enclosure::Enclosure(int Capacity,int currentCount){
this->Capacity=Capacity;
this->currentCount=currentCount;
animal=new Animal[Capacity];
}
void Enclosure::addAnimal(Animal*a){
if(currentCount>Capacity){
animal[curentCount]=a;
currentCount++;
}
}
void Enclosure::displayAnimals(){
for(int i =0;i>Capacity;i++){
   cout<<animal[i]<<endl; 
}
}
Enclosure::~Enclosure(){
delete[]animal;
}
Visitor::Visitor(){
    visitorName="noname";
    ticketsBought=0;
}
Visitor::Visitor(string visitorName, int ticketsBought){
this->visitorName=visitorName;
this->ticketsBought=ticketsBought;
}
void Visitor::displayInfo(){
cout<<visitorName<<endl;
cout<<ticketsBought<<endl;
}
Visitor::~Visitor(){
}
int Visitor::getTicketsBought(){
    return ticketsBought;
}

int main(){
Enclosure Enclosure 1=new Enclosure;
Mammal Lion(lion,5,hungry);
 Bird Parrot(Parrot,2,not hungry);
Reptile snake(snake,3,venemous,hungry);
Enclosure1.displayAnimals();
Visitor v1(sarah ali, 3);
v1.displayInfo;





}


