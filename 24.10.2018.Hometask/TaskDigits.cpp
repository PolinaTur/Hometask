#include <iostream>
#include <cmath>

int AmountOfDigits(long long number);
long long InPutNumber();
int MinDigit(long long number);
int MaxDigit(long long number);
bool IsPrimeNumber(long long number);

using namespace std;

int main()
{
	char escape = 'y';
	while (escape == 'y' || escape == 'Y')
	{
		long long number = InPutNumber();
		cout << "The amount of digits is - " << AmountOfDigits(number) << endl;
		cout << "The minimum digit is - " << MinDigit(number) << endl;
		cout << "The maximum digit is - " << MaxDigit(number) << endl;
		if (IsPrimeNumber(number) == 1)
		{
			cout << "This number is prime";
		}
		else
		{
			cout << "This number isn't prime";

		}

		cout << "If you want to continue enter y or Y";
		cin >> escape;
		system("cls");

	}

	system("pause");
	return 0;
}
int AmountOfDigits(long long number)
{
	int i = 1;
	number = abs(number);
	while (number >= 1)
	{
		i++;
		number = number / (10 * i);
	}

	return i;
}

int MinDigit(long long number)
{
	int digit_min = 9, digit = 0;
	number = abs(number);
	while (number >= 1)
	{
		digit = number % 10;
		if (digit_min > digit)
		{
			digit_min = digit;
		}
		number /= 10;
	}
	return digit_min;
}
int MaxDigit(long long number)
{
	int  digit = 0, digit_max = 0;
	number = abs(number);
	while (number > 0)
	{
		digit = number % 10;
		if (digit_max < digit)
		{
			digit_max = digit;
		}
		number /= 10;
	}
	return digit_max;
}

long long InPutNumber()
{
	long long number;
	cout << "Please enter number ";
	cin >> number;
	return number;
}
bool IsPrimeNumber(long long number)
{
	for (int i = 2; i < sqrt(number); i++)
	{
		if (!(number % i))
		{
			return false;
		}
	}
	return true;
}
//int Digits(long long number)
//{
//	int i = 1, digit = 0;
//	number = abs(number);
//	while (number >= 1)
//	{
//		int counter0= 0, counter1 = 0;
//		digit = number % 10;
//		switch (digit)
//		{
//
//		
//          case 0:
//		{
//			++counter0;
//			break;
//		}
//	  case 1:
//	  {
//		  ++counter1;
//		  break;
//	  }
//	  case 2:
//	  {
//		  ++counter2;
//		  break;
//	  }
//	  case 3:
//	  {
//		  ++counter3;
//		  break;
//	  }
//	  case 4:
//	  {
//		  ++counter4;
//	  }
//	  case 5:
//	  {
//		  ++counter5;
//		  
//	  }
//	  case 6:
//	  {
//		  ++counter6;
//		  break;
//	  }
//	  case 7:
//	  {
//		  ++counter7;
//		  break;
//	  }
//	  case 8:
//	  {
//		  ++counter8;
//		  break;
//	  }
//	  case 9:
//	  {
//		  ++counter9;
//		  break;
//	  }
//	  default :
//	  {
//		  cout << "error";
//	  }
//
//
//	
//
//	}
//
//	return 0;
//}
