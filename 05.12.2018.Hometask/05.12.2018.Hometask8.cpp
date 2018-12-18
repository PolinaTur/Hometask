#include <iostream>
#include "String.h"
#include "ArrayExtension.h"

using namespace std;

void SwapColumnMatrix(int[][M], int, int);
void SwapStringMatrix(int a[][M], int n, int m);

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		int matrix[M][M] = { {0} };

		int n;
		cout << "Enter n bigger than 1: " << endl;
		cin >> n;

		int m;
		cout << "Enter m bigger than 1: " << endl;
		cin >> m;

		system("cls");

        InitMatrix(matrix, n,m);
		
		SwapColumnMatrix(matrix, n, m);
		cout << " The resulting matrix is:" << endl;
		DisplayMatrix(matrix, n, m);

		SwapStringMatrix(matrix, n, m);
        cout << " The resulting matrix is:" << endl;
		DisplayMatrix(matrix, n, m);

		system("cls");

		cout << " If yoy want to continue please enter y or Y";
		cin >> escape;
	}

	system("pause");
	return 0;
}

void SwapStringMatrix(int a[][M], int n, int m)
{
	for (int j = 0; j < m; j++)
	{
		for (int i = n - 1; i > n/2; i--)
		{
		 
			Swap(a[(n- 1) - i][j], a[i][j]);

		}
	}
}
void SwapColumnMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j > n/2; j--)
		{

			Swap(a[i][(m -1) - j], a[i][j]);

		}
	}
}