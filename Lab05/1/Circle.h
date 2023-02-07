#ifndef Circle_h
#define Circle_h
# define M_PI           3.14159265358979323846  /* pi */
#include<math.h>
#include <iostream>

using namespace std;

struct Circle {      
public:
    int x = 0;
    int y = 0;
    int radius = 1;
    double area = M_PI * pow(radius, 2);

    void setX(int xCoord){
        this -> x = xCoord;
    }
    
    void setY(int yCoord){
        this -> y = yCoord;
    }
    void setR(int r){
        this -> radius = r;
        this -> area = M_PI * pow(r, 2); 
    }
    

    int getX(){
        return (this -> x) ;
    };

    int getY(){
        return (this -> y);
    }

    int getR(){
        return (this -> radius);
    }
};
#endif
