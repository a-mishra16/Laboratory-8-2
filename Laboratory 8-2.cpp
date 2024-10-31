/*
* Program: Laboratory 8-2.cpp
* Author: Aanika Mishra
* Date: 10-31-2024
* Description: This program counts and returns the number of words in a string given by the user 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int countWords(string str);

int main()
{
	string input;

	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);

		if (input == "Q")
		{
			break;
		}
		cout << "Word Count: " << countWords(input) << endl;
	}
}

int countWords(string str)
{
	int words = 1;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && str[i-1] != ' ')
		{
			words++;
		}
	}
	return words;
}