#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
// Declaring Vector of String type
    vector<int> letterTotal;
    vector<int> wordTotal;
    string input;

    for(int i = 0; i < 10; i++){
        letterTotal.push_back(0);
        wordTotal.push_back(0);
    }
    while(true)
    {
        cout << "Enter word: ";
        cin >> input;
        if(input == "quit")
        {
            break;
        }
        else{
            int count = input.length();
            letterTotal[count] += count;
            wordTotal[count] += 1;
        }
    }
    for(int j = 0; j < letterTotal.size(); j++){
        if(letterTotal[j] != 0){
        cout << letterTotal[j] << " " << wordTotal[j] << endl;
        }
    }
    return 0;
}