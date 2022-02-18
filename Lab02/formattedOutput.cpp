#include <iostream>
#include <bitset>
using namespace std;


int main(int argc, char *argv[]) {
    int a;
    char hex_string[20];

    while(a != -1){
        
        cout << "Enter a number: ";
        cin >> a;
        if(a == -1){
            break;
        }
            
        std::cout << "Hexadecimal: " << "0x" << std::hex << a  << std::endl;
        std::cout << "Binary: " << std::bitset<8>(a)  << std::endl;
    }
    return 0;
}