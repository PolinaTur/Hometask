#include <iostream>
#include <cmath>

using namespace std;

int InPutN(int = 0);
int Fact(int);
int InPutN(int, int);
void SwitchSum(double);
int SwitchNumber(int = 0);
void Switch();
double Sum1(int);
double Sum2(int);
double Sum3(int);
double Sum4(int);
double Sum5(int);
double Sum6(int);
double Sum7(int);
double Sum8(int);
double Sum9(int);


int main()
{
	char esc = 'y';
	while (esc == 'y' || esc == 'Y')
	{
		Switch();
        cout << "Press y ot Y to continue";
		cin >> esc;
		system("cls");
		system("pause");
    }
	return 0;
}

void SwitchSum(double sum)
{
	cout << "Sum of this expression is " << sum << endl;

}

int InPutN(int minValue)
{
	int n;
	while (true)
	{
		cout << "Enter number:";
		cin >> n;
		if (n > minValue)
		{
			return n;
		}
		cout << "Invalid number!Try again!" << endl;
		system("pause");
		system("cls");
	}

}

int Fact(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * Fact(n - 1);
	}

}

int InPutN(int minValue, int maxValue)
{
	int n;
	while (true)
	{
		cout << "Enter number:";
		cin >> n;
		if (n >= 1 && n <= 15)
		{
			return n;
		}
		cout << "Invalid number!Try again!" << endl;
		system("pause");
		system("cls");
	}

}

double Sum1(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(2, i);
	}

	return sum;
}
double Sum2(int n)
{
	double sum = 0;
	for (double i = 0; i <= n; i++)
	{
		sum *= (1 + 1 / pow(i, 2));
	}

	return sum;
}
double Sum3(int n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += 1 / pow(i, 5);
	}

	return sum;
}
double Sum4(int n)
{
	double sum = 0;
	for (double i = 3; i <= n; i = i + 2)
	{
		sum += 1 / pow(i, 2);
	}

	return sum;
}
double Sum5(int n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += (pow(-1, i + 1) / (i*(i + 1)));
	}

	return sum;
}
double Sum6(int n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += (pow((-1), i) / (2 * i + 1));
	}

	return sum;
}
double Sum7(int n)
{
	double sum = 0;
	double sumden = 0;
	for (int i = 1; i <= n; i++)
	{
		sumden += 1 / i;
		sum += Fact(i) / sumden;
	}

	return sum;
}
double Sum8(int n)
{
	double sum = 0;
	double generalSquare = 0;
	for (double i = 1; i <= n; i++)
	{
		sum = sqrt(2 + generalSquare);
	}

	return sum;
}
double Sum9(int n)
{
	double sum = 0;
	double sumden = 0;
	for (double i = 1; i <= n; i++)
	{
		sumden += sin(i);
		sum += 1 / sumden;
	}

	return sum;
}
int SwitchNumber(int)
{
	int number;
	while (true)
	{
		cout << "Enter number from 1 to 9 to count the sum";
		cin >> number;
		if (number >= 1 && number <= 9)
		{
			return number;
		}
		cout << "Invalid number!Try again!" << endl;
		system("pause");
		system("cls");

	}

}
void Switch()
{
	int number = SwitchNumber();
	switch (number)
	{
	case 1:
	{
		int n = InPutN();
		double sum = Sum1(n);
		SwitchSum(sum);
		break;
	}
	case 2:
	{
		int n = InPutN();
		double sum = Sum2(n);
		SwitchSum(sum);
		break;
	}
	case 3:
	{
		int n = InPutN();
		double sum = Sum3(n);
		SwitchSum(sum);
		break;
	}
	case 4:
	{
		int n = InPutN();
		double sum = Sum4(n);
		SwitchSum(sum);
		break;
	}
	case 5:
	{
		int n = InPutN();
		double sum = Sum5(n);
		SwitchSum(sum);
		break;
	}
	case 6:
	{
		int n = InPutN();
		double sum = Sum6(n);
		SwitchSum(sum);
		break;
	}
	case 7:
	{
		int n = InPutN(1,15);
        double sum = Sum7(n);
		SwitchSum(sum);
		break;
	}
	case 8:
	{
		int n = InPutN();
		double sum = Sum8(n);
		SwitchSum(sum);
		break;
	}
	case 9:
	{

		int n = InPutN();
		double sum = Sum9(n);
		SwitchSum(sum);
		break;
	}
	default:
	{
		cout << "Error.Please enter the digit from 1 to 9" << endl;
	}
	}
}
