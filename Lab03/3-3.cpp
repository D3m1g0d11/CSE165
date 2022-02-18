#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main()
{

// Declaring Vector of String type
    vector<int> bookOfPi;
    int input;
    while(1)
    {
        cout << "Enter number: ";
        cin >> input;
        if(input == 0)
        {
            break;
        }
        else if(input > 0)
        {
            bookOfPi.push_back(input);
            
        }
        else
        {

            int a = abs(input);
            for(int i = 0; i < bookOfPi.size(); i++){
                if(bookOfPi[i] == a){
                    bookOfPi.erase(bookOfPi.begin() + i);
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < bookOfPi.size(); i++){
        cout << bookOfPi[i] << " ";
        sum += bookOfPi[i];
    }
    cout << sum;

    return 0;
}