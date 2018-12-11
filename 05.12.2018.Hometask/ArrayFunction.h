#include <iostream>


void Swap(int& x, int& y);
void InPutArray(int* array, int n);
void DisplayArray(int* array, int n);
void SelectionSort(int* array, int n);
void BubbleSort(int* array, int n);
void RandomArray(int* array, int n, int max);
void SelectionSortDiscreasing(int* array, int n);
void InsertionSort(int* array, int n);
void BubbleSortDiscreasing(int* array, int n);
int InPutElement();
int InPutDimension(int dimension);


using namespace std;

void Swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
void InPutArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << (i + 1) << "] : ";
		cin >> array[i];
	}
}
void DisplayArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
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
void RandomArray(int* array, int n, int max)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % max - max / 2;
	}
}
void SelectionSort(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		Swap(array[min], array[i]);
	}
}
void SelectionSortDiscreasing(int* array, int n)
{
	for (int i = n - 1; i > 0; i--)
	{
		int max = i;
		for (int j = i - 1; j >= 0; j --)
		{
			if (array[max] > array[j])
			{
				max = j;
			}
		}
		Swap(array[max], array[i]);
	}
}
void BubbleSortDiscreasing(int* array, int n)
{
	bool swapped = true;
	int i = n;
	while (swapped)
	{
		swapped = false;
		for (int j = 0; j < i; j++)
		{
			if (array[j+1] > array[j])
			{
				Swap(array[j], array[j + 1]);
				swapped = true;
			}
		}
		i--;
	}
}
void InsertionSort(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
            if (array[j + 1] < array[j])
			{
				Swap(array[j + 1], array[j]);
			}
		}
	}
}
int InPutElement()
{
	int element;
	cout << "\nPlease enter element ";
	cin >> element;
	return element;
}
int InPutDimension(int dimension)
{
	int n;
	while (true)
	{
		cout << "Enter distention of array <= " << dimension << " : ";
		cin >> n;
		if (n >= 1 && n <= dimension)
		{
			break;
		}
		cout << "Invalid data! Try again";
	}
	return n;
