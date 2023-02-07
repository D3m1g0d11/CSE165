#pragma once
#include<math.h>
#include "Vec.h"
#include <iostream>

using namespace std;

struct Rect {      
public:
    float length;
    float width;
    float x;
    float y;

    const static Rect null;

    Rect()
    {
        x = 0.0f;  
        y = 0.0f;
        length = 0.0f;
        width = 0.0f;
    }

    Rect(float a, float b, float c, float d)
    {
        x = a;  
        y = b;
        width = c;
        length = d;
    }

   bool contains(Vec a){
       bool inside;
       if(a.x >= x && a.x <= (x + width) && a.y <= y && a.y >= (y - length)){
            return true;   
       }
       else{
           return false;
       }
   }

};
//const Rect Rect::null(0.0f,0.0f);
//#endif
