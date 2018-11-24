#include <iostream>
#include "ArrayFunction.h"

using namespace std;

//void InsertionSort(int*, int);
//void ShiftRightElement(int*, int);
int BinarySearch(int*, int);
int InPutElement();



int main()
{
	const int N = 100; 
    int array[N] = { 0 };
    int n; 

	while (true)
	{
		cout << "Enter distention of array <= " << N << " : ";
		cin >> n;
		if (n >= 1 && n <= N)
		{
			break;
		}
		cout << "Invalid data! Try again";
	}
	InPutArray(array, n);
	cout << "Source array:" << endl;
	DisplayArray(array, n);

	SelectionSortDiscreasing(array, n);
	cout << "\nSorted array" << endl;
	DisplayArray(array, n);

	int quantity = BinarySearch(array, n);
	cout << "The quantity of elements which is less than set is - " << quantity << endl;
	
	system("pause");
	return 0;
}
int BinarySearch(int* array, int n)
{ 
	int element = InPutElement();
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < element)
		{
			sum++;
		}
		
	}
	return sum;
}
int InPutElement()
{
	int element;
	cout << "\nPlease enter elemet with whom you want to compare other elements of array";
	cin >> element;
	return element;
}