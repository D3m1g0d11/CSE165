#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{

// Declaring Vector of String type
    vector<vector<string>*> counter;
    for(int i = 0; i < 10; i++){
        counter.push_back(new vector<string>);
    }
    string input;
    while(1)
    {   
        cout << "Enter word: ";
        cin >> input;
        if(input == "quit"){
            break;
        }
        else
        {
            counter[input.length() -1]-> push_back(input);
        }
    }
for(int i = 0; i < 10 ; i++)
{
    for(int j = 0; j < counter[i] -> size(); j++){
        cout << (*counter[i])[j] << " ";
    }
    if(counter[i] -> size() > 0){
        cout << endl;
    }
}
    return 0;
}