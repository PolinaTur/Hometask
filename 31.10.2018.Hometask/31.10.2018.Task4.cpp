#include <iostream>

using namespace std;

void InPutArray(int* array, int n);
void BinaryNumberCode(int* array, int n);

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		const int N = 100;
		int array[N] = { 0 };
		int n;
		while (true)
		{
			cout << "Enter dimention of array <= " << N << " : ";
			cin >> n;
			if (n >= 1 && n <= N)
			{
				break;
			}
			cout << "Invalid data! Try again";
		}
		InPutArray(array, n);
		BinaryNumberCode(array, n);
		cout << "If you want to continue please enter y or Y";
		cin >> escape;
		system("cls");
	}
	return 0;
}
void BinaryNumberCode(int* array, int n)
{
	int sum = 0;
	int i = 0;
	int number = array[i];
	while (i <= n - 1)
	{
	
		while (number != 0 )
		{
			if (number % 2 == 1)
			{
				sum++;
			}
			number /= 2;
		}
		cout << "The amount of 1 in the binary code of this number "<< array[i] <<" is - " << sum << endl;
		number = array[i];
		i++;
		sum = 0;
	}

}
void InPutArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << (i + 1) << "] : ";
		cin >> array[i];
	}
}