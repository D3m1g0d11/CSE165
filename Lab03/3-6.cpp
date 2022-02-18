#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string lowerCase(string input){
    string a = "";
    int counter = 0;
    char b;

    while(counter != input.length()){
        b = input[counter];
        a += tolower(b);
        counter++;
    }
    return a;
}

int main(){
// Declaring Vector of String type
    vector<string> words;
    string input;
    string a;
    while(true)
    {
        cout << "Enter word: ";
        cin >> input;
        if(input == "quit")
        {
            break;
        }
        else if(input.length() > 3){
            words.push_back(input);
        }
        else{
            a = input;
        }
    }
    for(int j = 0; j < words.size(); j++){
        string b = lowerCase(a);
        string c = lowerCase(words[j].substr(0, a.length()));
        if(b == c){
        cout << words[j] << " ";
        }
    }
    return 0;
}