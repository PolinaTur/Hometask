#include <iostream>
#include <cmath>

double Cosinus(double value, double accurancy);
double InPutEps();
double InPutX();

using namespace std;

int main()
{
	char esc = 'y';
	while (esc == 'y' || esc == 'Y')
	{
		double x = InPutX();
		double eps = InPutEps();
		double actual = cos(x);
		cout << "Actual cosinus is "<< actual << endl;
		double expected = Cosinus(x, eps);
		cout << " Expected cosinus is "<< expected << endl;
		cout << " The accurancy is " << fabs(actual - expected) << endl;
		cout << "Press y ot Y to continue";
		cin >> esc;
		system("cls");
		system("pause");
	}
	return 0;
	
}
double InPutX()
{
	double x;
	cout << "Please enter the number x whcih cosinus you want to count\n";
	cin >> x;
	return x;
}
double InPutEps()
{
	double eps;
	cout << "Please enter the number epsilon\n";
	cin >> eps;
	if (eps > 0);
	{
		return eps;
	}

}
double Cosinus(double x, double eps)
{
	double term = x;
	double cosinus = term;
	int i = 0;
	while (fabs(term) > eps)
	{
		term *= -(x * x) / (2*i-1) / (2*i);
		cosinus += term;
		i++;
	}
	return cosinus;
}