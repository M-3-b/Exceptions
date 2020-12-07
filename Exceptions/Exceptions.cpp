// CIS 1202 501
// Matthew Brinkman
// 12/6/2020

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

char character(char start, int offset);

int main()
{
	int count = 0;
	char start = 'a';
	int offset = 0;
	
	do
	{
		try
		{
			cout << "Your new Letter is: " << character(start, offset) << endl;
		}
		catch (string exceptionString)
		{
			cout << exceptionString;
			count++;
		}
	
	} while (count == 0);
	
	system("Pause");
	return(0);
}

char character(char start, int offset)
{
	char end;

	cout << "What Letter do you Want to Start With: ";
	cin >> start;
	cout << "What do you Want the Offset to be: ";
	cin >> offset;

	end = start + offset;

	if (isupper(start))
	{
		if (end < 65 || end > 90)
		{
			string exceptionString = "ERROR: InvalidRangeExpection.\n";
			throw exceptionString;
		}
		if (65 > start || 90 < start)
		{
			string exceptionString = "ERROR: InvalidCharacterExcpeption.\n";
			throw exceptionString;
		}
	}
	if (islower(start))
	{
		if (end < 97 || end > 122)
		{
			string exceptionString = "ERROR: InvalidRangeExpection.\n";
			throw exceptionString;
		}
		if (97 > start || 122 < start)
		{
			string exceptionString = "ERROR: InvalidCharacterExcpeption.\n";
			throw exceptionString;
		}
	}

	//caps 65-90
	//lower 97-122

	return end;
}