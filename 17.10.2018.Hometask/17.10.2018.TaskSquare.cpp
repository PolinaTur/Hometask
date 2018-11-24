#include <iostream>
#include <cmath>

double Accurancy(double, double);
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
		double actual = sqrt(x);
		cout << "Actual square is " << actual << endl;
		double accurancy = Accurancy(x,eps);
		cout << " The accurancy is \n" << accurancy;
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
	cout << "Please enter the number x whcih square you want to count\n";
	cin >> x;
	if (x > 0);
	{
	
		return x;
	}

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
double Accurancy(double x, double eps)
{
	double prev=1;
	double next = 0.5*(prev+x/prev);
	
	while (fabs(prev-next) <= eps)
	{
		prev += 0.5*(prev+x/prev);
		next=prev;
	
	}
	return next;
}