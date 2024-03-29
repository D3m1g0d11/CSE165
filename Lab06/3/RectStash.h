#pragma once

#include <cassert>
#include <iostream>
#include "Vec.h"
#include "Rect.h"

class RectStash {
   int size; // Size of each space
   int quantity; // Number of storage spaces
   int next; // Next empty space

   // Dynamically allocated array of bytes:
   unsigned char* storage;
public:

   // Functions!
   void initialize(int sz){
       size = sz;
       quantity = 0;
       storage = 0;
       next = 0;
   }

   void cleanup(){
       if (storage != 0) {
           std::cout << "freeing storage" << std::endl;
           delete[]storage;
       }
   }

   int add(const void* element){
       if (next >= quantity) // Enough space left?
           inflate(100);

       // Copy element into storage,
       // starting at next empty space:
       int startBytes = next * size;
       unsigned char* e = (unsigned char*)element;

       for (int i = 0; i < size; i++)
           storage[startBytes + i] = e[i];
       next++;

       return(next - 1); // Index number
   }

   void* fetch(int index){
       // Check index boundaries:
       assert(0 <= index);

       if (index >= next)
           return 0; // To indicate the end

       // Produce pointer to desired element:
       return &(storage[index * size]);
   }

   int count() {
       return next; // Number of elements in CStash
   }
   int sizeRe(){
       return size;
   }

   void inflate(int increase){
       assert(increase > 0);

       int newQuantity = quantity + increase;
       int newBytes = newQuantity * size;
       int oldBytes = quantity * size;
       unsigned char* b = new unsigned char[newBytes];

       for (int i = 0; i < oldBytes; i++)
           b[i] = storage[i]; // Copy old to new

       delete[]storage; // Old storage
       storage = b; // Point to new memory
       quantity = newQuantity;
   }
   RectStash() {
       initialize(sizeof(Rect*));
   }
};