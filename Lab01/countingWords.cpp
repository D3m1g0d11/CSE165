#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream fin;
	fin.open("words.txt");
	char ch;
	int count = 0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ' || ch == '\n')
		{
			count++;
		}
	}
	cout << "Total words: " << count;
	fin.close();
}