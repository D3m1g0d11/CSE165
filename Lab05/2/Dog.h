#include "Animal.h"
# pragma once
#include <iostream>

using namespace std;
class Dog : virtual public Animal
{

public:
   Dog();
   Dog(string, int);
   string getName();
   int getAge();
   void setName(string);
   void setAge(int);
   void feed();
   ~Dog();
};