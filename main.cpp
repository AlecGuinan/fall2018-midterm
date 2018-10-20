/**
Description: This program accepts a string and a character and counts the number of tim es that character is in the string
Filename:main.cpp
Author: Alec Guinan
Date: 10-19-2018
*/
#include<iostream>
#include<string>

using namespace std;
string get_string( string prompt);// This prompts the user for a string and returns it
int char_count( string s, char l);// This counts the number of times the char is in the string
char get_char( string prompt);// This prompts the user for a char and returns it

int main()
{
	string s = get_string("Please enter a sentence: ");
	char c = get_char("Enter the character you want counted: ");
	cout << char_count( s, c ) << endl;
	return 0;
}

string get_string( string prompt)
{
	string s;
	cout << prompt; 
	cin >> s;
	return s;
}
int char_count( string s, char l)
{
	l = tolower(l);
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s.at(i);
		c = tolower(c);
		if ( c == l)
		{
			count ++;
		}
	}
	return count;
}	
char get_char(  string prompt)
{
	char c;
	cout << prompt;
	cin >> c;
	return c;
}
