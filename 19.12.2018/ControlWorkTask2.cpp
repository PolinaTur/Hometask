#include <iostream>

using namespace std;

void encoding(char[], int[], char[]);
void decoding(int[], char[], char[]);
void codingTests();
bool equals(char[], char[]);
int GetLength(char*);
int GetLength(int*);

int main()
{
   codingTests();
   system("pause");
}

void encoding(char source[], int encoding[], char rule[])
{
	int length = GetLength(rule);
	int i = 0, j = 0;
	while (i < length)
	{
		if (rule[i] == source[j])
		{
			encoding[j] = i;
			j++;
			i = 0;
		}
		i++;
	}

}

void decoding(int source[], char decoding[], char rule[])
{
	int length = GetLength(source);
	for (int i = 0; i < length; i++)
	{
		decoding[i] = rule[source[i]];
	}
}

bool equals(char lhs[], char rhs[])
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
		if (lhs[i] != rhs[i])
		{
			return false;
		}
		i++;
	}

	return true;
}

void codingTests()
{
	const int length = 30;

	char source[length] = "hello world!";

	int numbers[length] = { 0 };

	char rule[length] = "zyxwvutsrqponmlkjihgfedcba!+ ";

	encoding(source, numbers, rule);

	char expected[length] = { 0 };

	decoding(numbers, expected, rule);

	cout << equals(source, expected) << endl;

}

int GetLength(char* source)
{
	int length = 0;

	while (source[length])
	{
		length++;
	}

	return length;
}

int GetLength(int* source)
{
	int length = 0;

	while (source[length])
	{
		length++;
	}

	return length;
}