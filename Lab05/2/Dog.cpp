#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog():Animal()
{
   cout << "Creating Generic Dog" << endl;
   Animal::setName("Generic Dog");
   Animal::setAge(0);
}

Dog::Dog(string name, int age):Animal(name, age) {
    cout << "Creating Generic Dog" << endl;
    name = name;
    age = age;
}

string Dog::getName() { 
    return Animal::getName(); 
}

int Dog::getAge() { 
    return Animal::getAge(); 
 }

void Dog::setName(string name) { 
    Animal::setName(name); 
    }

void Dog::setAge(int age) { 
    Animal::setAge(age); 
    }

Dog::~Dog() { 
    cout << "Deleting Dog" << endl; 
    }

void Dog::feed() { 
    cout << "A small bone, please!\n"; 
}