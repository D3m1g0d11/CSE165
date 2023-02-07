#ifndef LA5_Object_h
#define LA5_Object_h

class Object{
    
    
public:
    
    static int count;

    Object (){
        count++;
    }

    Object(const Object& E){
        count++;
    }

};

#endif