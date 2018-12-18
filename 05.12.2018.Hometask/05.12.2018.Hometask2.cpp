#include <iostream>
#include  "ArrayFunction.h"
#include "String.h"

using namespace std;

void ToReplaceWord(char*,char*,char*,int);

int main()
{
	char string[N] = "";
	cout << "Please enter the string:" << endl;
	cin >> string;
	cout <<"The string is:" << string << endl;

	char substring[N] = "";
	cout << "Please enter the substring of the string:" << endl;
	cin >> substring;
	cout << "The substring is:" << substring << endl;
	
	char word[N] = "";
	cout << "Please enter the word:" << endl;
	cin >> word;
	cout  << "The word is:" << word << endl;

	system("cls");
	
	int index = FindSubstringPosition(string, substring);

    ToReplaceWord(string, word,substring, index);

	cout << "The resulting string is :" << string << endl;

	system("pause");
	return 0;
}
void ToReplaceWord(char* string,char* word,char* substring, int index)
{
	int i = index, j = 0, k = 0;
	int length_word = GetLength(word), length_substring = GetLength(substring), length_string = GetLength(string);

	while (i < length_string)
	{
		if (j >= length_word)
		{
			string[i] = string[length_string - (index + length_substring) + k];
			k++;
		}

		else
		{
			string[i] = word[j];
			
		}
		j++;
		i++;
	}
}