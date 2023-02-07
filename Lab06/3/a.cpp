#include <iostream>
#include <cassert>
#include "Rect.h"
#include "Vec.h"
#include "RectStash.h"

using namespace std;

int main(int argc, const char * argv[])
{
   float a, b, c, d;
   RectStash storage;
   Rect * tmp;
   Vec vector;
   bool nega = true;

    while(nega){
       cin >> a;
       cin >> b;
       cin >> c;
       cin >> d;
    if(a >= 0 || b >= 0 || c >= 0 || d >= 0){
        tmp = new Rect(a, b, c, d);  
        storage.add(tmp);
        continue;
    }
    else{
        nega = false;
        break;
    }
    }
    while (a != -99 || b != -99) {
       cin >> a;
       cin >> b;
        Vec e = Vec(a,b);
        
       if (a != -99 || b != -99) {
           int i = 0;
            tmp = static_cast<Rect *>(storage.fetch(i));
           while (tmp != NULL) {
               if (tmp->contains(e)){
                    cout << "in ";
               }
               else{ 
                   cout << "out ";
               }
               i++;
               tmp = static_cast<Rect *> (storage.fetch(i));
           }
           cout << endl;
       }
    }
    return 0;
}