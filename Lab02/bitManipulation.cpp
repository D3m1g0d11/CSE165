#include<iostream>
#include <bitset>
using namespace std;
void getBit(int n, int index);
void setBit(int n, int index);
void clearBit(int n, int index);
void convertDecimalToBinary(int n);
int main()
{
    int n, a[10], i, index, input;
    cout << "Enter a decimal number: ";
    cin >> n;
  
    cout << "Enter index: ";
    cin >> index;

   convertDecimalToBinary(n);

   cout<<endl<<"Enter the operation :"<<endl;
   cout<<"1. Retrieve a bit"<<endl;
   cout<<"2. Set a bit"<<endl;
   cout<<"3. Clear a bit"<<endl;

   cin >> input;

   if(input == 1){
       getBit(n, index);
   }else if(input == 2){
       setBit(n, index);
   }else if (input == 3){
       clearBit(n, index);
   }else{
       cout << endl << "Invalid input";
   }
}

void getBit(int n, int index){
    index = index + 1;
   cout << endl<<((n & (1 << (index - 1))) >> (index - 1));
}

void setBit(int n, int index){
   int number = ((1 << index) | n);
   convertDecimalToBinary(number);
}

void clearBit(int n, int index){
   index = index + 1;
   int input = (n & (~(1 << (index - 1))));
   convertDecimalToBinary(input);
}
void convertDecimalToBinary(int n){
    int a[10];
    int b = n;
    int count = 0;
    for(int i = 0; b > 0; i++){
        a[i] = b%2;
        b = b/2;
        count++;
    }
    std::cout << endl << "Binary representaion of " << std::bitset<10> (n)  << std::endl;
  
}