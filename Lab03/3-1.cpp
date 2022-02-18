#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{

// Declaring Vector of String type
    vector<string> dictionary;
    string input;
    string a;
    while(1)
    {
        cout << "Enter word: ";
        cin >> input;
        if(input == "quit")
        {
            break;
        }
        else if(input.length() == 1)
        {
            for(int i = 0; i < dictionary.size(); i++){
                if(tolower(input[0]) == tolower(dictionary[i][0])){
                    cout << dictionary[i] << endl;
                }
            }
            
        }
        else
        {
            dictionary.push_back(input);
        }
    }    
    return 0;
}