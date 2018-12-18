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
void InitMatrix(int a[][M], int n)
{

	for (int j = 0, k = 1; j <= n - 1; j++, k++)
	{
		for (int i = 0; i <= n - 1; i++)
		{

			if (i == j || i == n - 1 - j)
			{
				a[i][j] = k;
			
            }
		}

	}
}

