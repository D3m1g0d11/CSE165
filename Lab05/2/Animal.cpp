#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Dog.cpp"

using namespace std;

int main(int argc, const char * argv[])
{
    Dog myDog = Dog("Bruno", 4);
    
    cout << myDog.getName() << " is " << myDog.getAge() << endl;

     myDog.feed();

    return 0;
}
