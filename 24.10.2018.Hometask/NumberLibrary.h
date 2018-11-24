#pragma once
#include <iostream>

bool IsPrimeNumber(long long number);
bool IsPalindrome(long long number);
long long CreateReverse(long long number);

using namespace std;

long long CreateReverse(long long number)
{
	int sign = number >= 0 ? 1 : -1;
	number = abs(number);
	long long reverse = 0;

	while (number)
	{
		int digit = number % 10;
		reverse = reverse * 10 + digit;
		number /= 10;
	}
	return sign * reverse;

}
bool IsPalindrome(long long number)
{
	return number == CreateReverse(number);
}
bool IsPrimeNumber(long long number)
{
	for (int i = 2; i < sqrt(number); i++)
	{
		if (!(number % i))
		{
			return false;
		}
	}
	return true;
}