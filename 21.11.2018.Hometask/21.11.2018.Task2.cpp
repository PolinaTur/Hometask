#include <iostream>
#include "ArrayFunction.h"


void StringsOrderRelation(char*, char*, int);
bool IsStringsEquivalent(char*, char*, int);

using namespace std;

int main()
{
	const int N = 500;

	char first_string[N] = { 0 };
	char second_string[N] = { 0 };

	cout << " Please enter the first string:";
	cin >> first_string;

	cout << "Please enter the second string:";
	cin >> second_string;

	StringsOrderRelation(first_string, second_string, N);
	
	system("pause");
	return 0;
}
void StringsOrderRelation(char* first_string, char* second_string, int N)
{
	
	if (first_string < second_string)
	{
		cout << " The second string is greater than the first ";
	}
	else if (first_string > second_string)
	{
		cout << " The first string is greater than the second ";
	}
	else 
	{
		if (IsStringsEquivalent(first_string, second_string, N) == true)
		{
			cout << "The strings are equivalent";
		}
		else
		{
			cout << "The strings aren't equivalent";
		}
	}
	
}
bool IsStringsEquivalent(char* first_string, char* second_string, int N)
{
	int i = 0, j = 0;
	if (first_string[i] == second_string[j] && (i < N || j < N))
	{
		i++;
		j++;
	}
	else
	{
		return false;
	}
}
