#include <iostream>
#include "String.h"
#include "ArrayExtension.h"

using namespace std;

void InitMatrix(int[][M], int);

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		int matrix[M][M] = { {0} };

		int n;
		cout << "Enter n bigger than 1: " << endl;
		cin >> n;
		system("cls");

		InitMatrix(matrix, n);

		cout << " The resulting matrix is:" << endl;
		DisplayMatrix(matrix, n, n);

		cout << " If yoy want to continue please enter y or Y";
		cin >> escape;
	}

	system("pause");
	return 0;
}
void InitMatrix(int a[][M], int n )
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < n / 2)
			{
				if (i == 0)
				{
					a[i][j] = 1;
				}
				else if (i - j > 0 || j >= n - i)
				{
					a[i][j] = 0;
				}
				else
				{
					a[i][j] = 1;
				}
			}
			else
			{
				if (i == n - 1)
				{
					a[i][j] = 1;
				}
				else if ( j - i >= 1 ||  i < (n - 1) - j)
				{
					a[i][j] = 0;
				}
				else
				{
					a[i][j] = 1;
				}
			}


		}
	}
}