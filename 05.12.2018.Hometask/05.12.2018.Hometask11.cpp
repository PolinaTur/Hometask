#include <iostream>
#include "String.h"
#include "ArrayExtension.h"

using namespace std;

void InitMatrix(int[][M], int);
int ValidationOfN(int);

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		int matrix[M][M] = { {0} };

		int n;
		cout << "Enter n bigger that can be divided by 2: " << endl;
		cin >> n;
		int number = ValidationOfN(n);

		system("cls");

		InitMatrix(matrix, number, number);
		InitMatrix(matrix, number);

		cout << " The resulting matrix is:" << endl;
		DisplayMatrix(matrix, number, number);

		cout << " If yoy want to continue please enter y or Y";
		cin >> escape;
	}

	system("pause");
	return 0;
}
void InitMatrix(int a[][M], int n)
{
	for (int i = 0; i < n/2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			Swap(a[i][j], a[i + n / 2][j]);
		}

	}

	for (int i = 0; i < n/2 ; i++)
	{
		for (int j = n/2; j < n; j++)
		{
			Swap(a[i][j], a[i + n / 2][j]);
		}
	}

}
int ValidationOfN(int n)
{
	if (n % 2 == 0)
	{
		return n;
	}
	else
	{
		cout << "Invalid number!Pleae try again";
	}
}