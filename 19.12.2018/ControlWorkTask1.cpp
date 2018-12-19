#include <iostream>

using namespace std;

int nextSmallerThan(int);
void nextSmallerThanTests();
void DigitsOfNumber(int*, int);
int GetLength(int*);
bool equals(int*, int*);
void BubbleSort(int* array, int n);
void Swap(int& x, int& y);




int main()
{
   nextSmallerThanTests();
	system("pause");
	return 0;
}

int nextSmallerThan(int number)
{
	const int N = 10;
	int digits[N] = { 0 };
	DigitsOfNumber(digits, number);


	int array[N] = { 0 };

	for (int i = number - 1; i > 0; i--)
	{
		DigitsOfNumber(array, i);

		if (equals(digits, array))
		{
			return i;
		}
	}

	return -1;
}

void DigitsOfNumber(int* array, int number)
{
	int digit = 0, i = 0;

	while (number)
	{
		digit = number % 10;
		array[i] = digit;
		number /= 10;
		i++;

	}
}

bool equals(int* digits,int* array)
{
	int n = GetLength(digits),
		m = GetLength(array);

	if (n != m)
	{
		return false;
	}
	BubbleSort(digits, n);
	BubbleSort(array, m);
	int i = 0;
	while (i < n)
	{
		if (digits[i] != array[i])
		{
			return false;
		}
		i++;
	}

	return true;
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
void BubbleSort(int* array, int n)
{
	bool swapped = true;
	int i = 1;
	while (swapped)
	{
		swapped = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (array[j] < array[j - 1])
			{
				Swap(array[j], array[j - 1]);
				swapped = true;
			}
		}
		i++;
	}
}

void Swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}



void nextSmallerThanTests()
{
	cout << (nextSmallerThan(21) == 12) << endl;
	cout << (nextSmallerThan(531) == 513) << endl;
	cout << (nextSmallerThan(2071) == 2017) << endl;
	cout << (nextSmallerThan(9) == -1) << endl;
	cout << (nextSmallerThan(111) == -1) << endl;
	cout << (nextSmallerThan(135) == -1) << endl;
	cout << (nextSmallerThan(1027) == -1) << endl;
	cout << (nextSmallerThan(22) == -1) << endl;
	cout << (nextSmallerThan(533) == 353) << endl;
	cout << (nextSmallerThan(71) == 17) << endl;
	cout << (nextSmallerThan(8) == -1) << endl;
	cout << (nextSmallerThan(666) == -1) << endl;
	cout << (nextSmallerThan(315) == 135) << endl;
	cout << (nextSmallerThan(27) == -1) << endl;
	
}