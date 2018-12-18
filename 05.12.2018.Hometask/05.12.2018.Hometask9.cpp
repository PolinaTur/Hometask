#include <iostream>
#include "String.h"
#include "ArrayExtension.h"

using namespace std;

void InitMatrix(int[][M],int [], int);

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		int array[N] = { 0 };

		int n;
		cout << "Enter number n bigger than 1";
		cin >> n;

		InPutArray(array, n);
		DisplayArray(array, n);
		
		int matrix[M][M] = { {0} };
        InitMatrix(matrix,array, n);

		cout << " The resulting matrix is:" << endl;
		DisplayMatrix(matrix, n, n);

		cout << " If yoy want to continue please enter y or Y";
		cin >> escape;
	}

	system("pause");
	return 0;
}

void InitMatrix(int a[][M],int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, k = 0; j < n; j++ , k++)
		{
			if (k + i >= n)
			{
				a[i][j] = array[(k+i) - n];
			}
			else
			{
				a[i][j] = array[i + k];
			}
		}
	}
}
