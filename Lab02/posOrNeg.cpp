#include <iostream>
using namespace std;
double areaOfCircle(int x);

int main(int argc, char *argv[]) {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if(a > 0){
        cout << "POSITIVE";
    }
    else if(a == 0){
        cout << "NEIN";
    }
    else{
        cout << "NEGATIVE";
    }
    cout << endl;
    if(abs(a) % 2 == 0)
    {
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    cout << endl;
    return 0;
}