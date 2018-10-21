/**
Description: This program will accept a string and a character, then return the number of times the character occurs in the string.
Filename: charcount.cpp
Author: Minhquang Phillip Tran
Date: October 19, 2018
**/

#include<iostream>
#include<string>

using namespace std;

string getstring(string prompt) // Gets a phrase from the user
{
	cout << prompt;
	string a;
	getline(cin, a);
	return a;
}

char getchar(string prompt) // Gets a character to search for from the user
{
	cout << prompt;
	char a;
	cin >> a;
	return a;
}

int char_count(char a, string b) // Counts the number of time a character appears in a string
{
	int number = 0;
	for (int i = 0; i < b.length(); i++)
	{
    		char c = b.at(i); // Allows individual characters in a string to be compared to the character being searched
		if (c == tolower(a) || c == toupper(a)) // Checks both Lower and Uppercase for matches
		{
			number++;
		}
	}
	return number;
}

int main()
{
	string phrase = getstring("Please input a phrase: ");
	char a = getchar("What character would you like counted: ");
	int count = char_count(a, phrase);
	cout << "The number of " << a << "\'s in your phrase is: " << count << "." << endl;
   	return 0;
}
