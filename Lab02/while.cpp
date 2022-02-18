#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a = 10;

    while(a != 0){

    cout << "Enter a number: ";
    cin >> a;

    if(a == 0){
        break;
    }
    if(a > 0){
        cout << "POSITIVE";
    }
    else{
        cout << "NEGATIVE";
    }
    cout << " and ";
    if(abs(a) % 2 == 0)
    {
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    cout << endl;
    }
    return 0;
}