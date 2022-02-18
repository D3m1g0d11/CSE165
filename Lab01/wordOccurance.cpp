#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;

string lowerCase(string letter){

    string lowercase;

    for(int i = 0; i < letter.length(); i++){
        if(letter[i] >= 97){
            char a = letter[i];
            a = a - 32;
            letter[i] = a;
            cout << letter[i];
        }
    }

    return lowercase;
}

int main() {
	ifstream fin;
    string a;
	fin.open("words.txt");
	cout << "Enter a string: ";
    cin >> a;
    lowerCase(a);
    cout << "God i hope this works: "<< a;
}