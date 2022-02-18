#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for(int i = a-1; i > 1; i--){
        bool prime = true;
        for(int j = i-1; j > 1; j--){
            if(i % j == 0){
                prime = false;
            }
        }
        if(prime){
            cout << i << " is prime." << endl;
        }
    }
    return 0;
}