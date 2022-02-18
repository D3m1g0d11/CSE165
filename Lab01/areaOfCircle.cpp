#include <iostream>
#include <math.h>
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;
double areaOfCircle(int x);

int main(int argc, char *argv[]) {
    int a;

    cout << "What is the radius of the circle? ";
    cin >> a;


    cout << "The area of the circle is: " << areaOfCircle(a) << endl;
}

double areaOfCircle(int x){
    double y = M_PI * pow(x, 2);

    return y;
}