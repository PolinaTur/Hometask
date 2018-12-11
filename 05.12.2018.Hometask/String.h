#pragma once

const int N = 256;

using namespace std;

int GetLength(char*);
int Compare(char*, char*, bool = false);
bool IsEqual(char*, char*, bool = true);
char ToUpper(char);
int FindSubstringPosition (char*, char*);


int GetLength(char* source)
{
	int length = 0;

	while (source[length]) // == source[length] != '/0' - default
	{
		length++;
	}

	return length;
}

int Compare(char* lhs, char* rhs, bool caseSensitive )
{
	int i = 0;
	int minLength = (GetLength(lhs) >= GetLength(rhs)) ? GetLength(rhs) : GetLength(lhs);

	while (i < minLength)
	{
		char  chl = !caseSensitive ? lhs[i] : ToUpper(lhs[i]),
			chr = !caseSensitive ? rhs[i] : ToUpper(rhs[i]);

		if (chl != chr)
		{
			return chl > chr ? 1 : -1;
		}
		i++;
	}

	return 0;
}

bool IsEqual(char* lhs, char* rhs, bool caseSensitive)
{
	int n = GetLength(lhs),
        m = GetLength(rhs);

	if (n != m)
	{
		return false;
	}

	int i = 0;
	while (i < n)
	{
		char  chl = caseSensitive ? lhs[i] : ToUpper(lhs[i]),
		      chr = caseSensitive ? rhs[i] : ToUpper(rhs[i]);

		if (chl != chr)
		{
			return false;
		}
		i++;
	}

	return true;
}

char ToUpper(char symbol)
{
	const int difference = 'a' - 'A';
	if (symbol >= 'a' && symbol <= 'z')
	{
		symbol -= difference;
	}
	return symbol;
}

int FindSubstringPosition (char* string, char* substring)
{
	int n = GetLength(string),
		m = GetLength(substring);

	if (m > n)
	{
		return -1;
	}

	int index = -1;
	for (int i = 0, j = 0 ;i < n && j < m; i++)
	{
		if (string[i] == substring[j])
		{
			j = i;
		}
	}
	return index;
}