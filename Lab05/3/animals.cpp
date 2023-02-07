#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "display.h"

using namespace std;

int main(int argc, const char * argv[])
{
    
    int num;
    char type;
    string name;
    int age;
    cin >> num;

    vector <Animal*> v;

    for(int a = 0; a < num; a++){
        cin >> type >> name >> age;
        if(type == 'A'){
            v.push_back(new Animal(name, age));
        }
        else if(type == 'D'){
            v.push_back(new Dog(name, age));
        }
    }

    display(v);

    return 0;
}
