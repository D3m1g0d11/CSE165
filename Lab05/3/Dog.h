#ifndef LA4_Dog_h
#define LA4_Dog_h

#include <iostream>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
public:
    
    Dog(){
        cout << "Creating Dog" << endl;
    }
    
    Dog(string n, int a){
        cout << "Creating Dog" << endl;
        setName(n);
        setAge(a);
    }

    ~Dog(){
        cout << "Deleting Dog" << endl;
    }
    
    void feed(){
        cout << "A small bone, please!!" << endl;
    }
    
};

#endif