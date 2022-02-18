#include <iostream>
#include <bitset>
using namespace std;


int main(int argc, char *argv[]) {
    int x, y, *ptr1, *ptr2, sum=0;
    int multiple;
    cout<<"Enter the first number: ";
    cin >> x; 
    cout << "Enter the second number: ";
    cin >> y;
    ptr1 = &x;
    ptr2 = &y;
    sum = *ptr1 + *ptr2;
    multiple = (*ptr1)*(*ptr2);
    int div = (*ptr1)/(*ptr2);
    int sub = (*ptr1) - (*ptr2);
    cout << "\nSum : "<< sum;
    cout << "\nSub: " << sub;
    cout << "\nMulti: " << multiple;
    cout << "\nDiv: " << div;
    cout<<endl;
    return 0;
}