#ifndef Vec_h
#define Vec_h 
#include<math.h>
#include <iostream>

using namespace std;

struct Vec {      
public:
    float x, y;

    const static Vec null;

    Vec()
    {
        x = 0.0f;  
        y = 0.0f;
    }

    Vec(float a, float b)
    {
        x = a;  
        y = b;
    }

    void setX(float xCoord){
        this -> x = xCoord;
    }
    
    void setY(float yCoord){
        this -> y = yCoord;
    }

    void add(Vec a){
        x += a.x;
        y += a.y;
    }

    void print(){
         cout<<"("<<x<<","<<y<<")";
    }
};
const Vec Vec::null(0.0f,0.0f);
#endif
