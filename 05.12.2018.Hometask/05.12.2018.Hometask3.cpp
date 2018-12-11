#include <iostream>
#include  "ArrayFunction.h"
#include "String.h"

using namespace std;

void DeleteWord(char*,char*,  int);

int main()
{
	char string[N] = "";
	cout << "Please enter the string:" << endl;
	cin >> string;
	cout << "The string is:" << string << endl;

	char substring[N] = "";
	cout << "Please enter the word of the string:" << endl;
	cin >> substring;
	cout << "The word is:" << substring << endl;

	int index = FindSubstringPosition(string, substring);

	DeleteWord(string, substring, index);

	cout << "The resulting string is :" << string << endl;
	
	DeleteWord(string,substring, index);

	cout << string << endl;

	system("pause");
	return 0;
}
void DeleteWord(char* string,char* substring,  int index)
{
	int i = index;
	int n = GetLength(substring);
	while (i < GetLength(string) - n)
	{
		string[i] = string[i + n];
		i++;
	}
}