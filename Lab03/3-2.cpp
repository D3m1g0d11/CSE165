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
    int times;
    string a;
    while(1)
    {
        cin >> input;
        cin >> times;
        if(times == -2)
        {
            break;
        }
        else if (times == -1){
            cout << endl;
        }
        else 
        {
            for(int i = 0; i < times; i++){
                cout << input;
            }
            cout << endl;
        }
    }    
    return 0;
}