#include <iostream>
#include  "ArrayFunction.h"
#include "String.h"

using namespace std;

void BreakInWords(char*, char*);

int main()
{
	char string[N] = "";

	cout << "Please enter string:" << endl;
	cin.getline(string, N, '\n');
	system("cls");
	cout << string << endl;
	
	char word[N] = "";
	BreakInWords(string, word);

	cout <<"The words of this string are:" << word;

	system("pause");
	return 0;
}
void BreakInWords(char* string, char* word)
{
	int i = 0, j=0;
	
	while (i < GetLength(string))
	{
		if (string[i] >= 'A' && string[i] <= 'z')
		{
			word[j] = string[i];
		}
		
		j++;
		i++;
	} 
}