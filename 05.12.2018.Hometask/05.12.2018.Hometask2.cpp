#include <iostream>
#include  "ArrayFunction.h"
#include "String.h"

using namespace std;

void ToReplaceWord(char*,char*,int);

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

    ToReplaceWord(string, word, index);

	cout << "The resulting string is :" << string << endl;

	system("pause");
	return 0;
}
void ToReplaceWord(char* string,char* word,int index)
{
	int i = 0;
	while (i < GetLength(word))
	{
		string[index] = word[i];
		i++;
		index++;
	}
}