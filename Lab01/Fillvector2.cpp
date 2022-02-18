#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;
int main()
{
    vector<string> v;
    ifstream in("code.cpp");
    string final;
    string line;
    while (getline(in, line)) //getline returns true if read successfully
    v.push_back(line); // Add the line to the end of v // Add line numbers:
    for(int i = 0; i < v.size() - 1; i++){
        int j = v.size()-1-i;
        final += v[i];
    }
    cout << final;
}