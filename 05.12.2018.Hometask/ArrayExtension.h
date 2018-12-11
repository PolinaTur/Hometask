#pragma once

#include <iostream>
#include "ArrayFunction.h"

using namespace std;

const int M = 100;

void InitMatrix(int[][M], int, int);
void DisplayMatrix(int[][M], int, int);
void Transpose(int[][M], int);
void BubbleSort(int [][M], int* , int, int);
void CreateKeys(int[][M], int, int, int*);
void Swap(int& x, int& y);
void Swap(int [], int [], int);
int FindMax(int* , int );


void InitMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << (i + 1) << "," << (j + 1) << "] = ";
			cin >> a[i][j];
		}
    }
}

void DisplayMatrix(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(5);
			cout << a[i][j];
		}
		cout << endl;
	}
}

void Transpose(int a[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			Swap(a[i][j], a[j][i]);
		}
	}
}

void CreateKeys(int a[][M], int n, int m, int* keys)
{
	for (int i = 0; i < n; i++)
	{
		keys[i] = FindMax(a[i], m);
	}
}

void BubbleSort(int matrix [][M], int* keys, int n, int m)
{
	bool swapped = true;
	int i = 1;
	while (swapped)
	{
		swapped = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (keys[j] < keys[j - 1])
			{
				/*for (int k = 0; k < m; k++)
				{
					Swap(matrix[j][k], matrix[j - 1][k]);
				}*/

				Swap(matrix[j], matrix[j - 1], m);
				Swap(keys[j], keys[j - 1]);
				swapped = true;
			}
		}
		i++;
	}
}

int FindMax(int* array, int m)
{
	int k = 0;
	for (int j = 0; j < m; j++)
	{
		if (array [j] > array[k])
		{
			k = j;
		}
	}

	return array[k];
}

void Swap(int left[], int right[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Swap(left[i], right[i]);
	}
}