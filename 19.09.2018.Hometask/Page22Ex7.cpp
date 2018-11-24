#include <iostream>;

using namespace std;

int main()
{
	cout << "Enter numbers equal 0 to exit" << endl;
	while (true)
	{
		double num1, num2, num3;
		cout << "Enter the first number, num1= ";
		cin >> num1;
		cout << "Enter the second number, num2= ";
		cin >> num2;
		cout << "Enter the third number, num3= ";
		cin >> num3;
		system("cls");

		if (num1 < num2  && num1 < num3)
		{
			cout << "The smallest number is num1= " << num1 << endl;

		}
		else if (num1 == 0 && num2 == 0 && num3 == 0)
		{
			break;  
		}
		else if (num2 < num1 && num2 < num3)
		{
			cout << "The smallest number is num2= " << num2 << endl;
		}
		else if  (num1 == num2 && num1 == num3)
		{
			cout << "Error. Please enter numbers that isn't equal" << endl;

		}
		else if (num2 == num1 && num2 != num3)
		{
			cout << "Error. Please enter numbers that isn't equal" << endl;
		}
		else if(num2 != num1 && num2==num3)
		{
			cout << "Error. Please enter numbers that isn't equal " << endl;
		} 
		else if (num2 != num3 && num1 == num3)
		{
			cout << "Error. Please enter numbers that isn't equal " << endl;
		}
		else
		{
			cout << "The smallest number is num3= " << num3 << endl;
		}

		system("pause");
		system("cls");
	}
	return 0;

}