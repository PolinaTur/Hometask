#include <iostream>

int FibonacciNumber();


using namespace std;

int main()
{
	int fibonacci_smallest = FibonacciNumber();
	cout << "The smallest three-digit Fibonacci's number is - " << fibonacci_smallest << endl;
	system ("pause");
	return 0;
}

int FibonacciNumber()
{
	int fibonacci = 0;
	int previous = 0;
	int term = 1;
	while (fibonacci <= 100)
	{
		fibonacci = previous + term;
		previous = term;
		term = fibonacci;
	}
	return fibonacci;
}
