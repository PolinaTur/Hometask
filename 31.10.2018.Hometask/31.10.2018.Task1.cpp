#include <iostream>

using namespace std;

void BinaryNumberCode();
int InPutNumber();

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		BinaryNumberCode(); 
		cout << "If you want to continue please enter y or Y";
		cin >> escape;
		system("cls");
	}
	system("pause");
    return 0;
}
void BinaryNumberCode()
{
	int number = InPutNumber();
	int sum = 0;
	while (number != 0)
    {
			
			if (number % 2 == 1)
			{
				sum++;
			}
			number /= 2;
	}
	cout << "The amount of 1 in the binary code of this number is - " << sum << endl;
	
}
int InPutNumber()
{
	int number;
	cout << "Please enter number ";
	cin >> number;
	return number;
}