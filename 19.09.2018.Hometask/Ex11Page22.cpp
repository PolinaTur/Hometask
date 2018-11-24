#include <iostream>;

using namespace std;

int main() 

{
	char esc = 'p';
	while (esc == 'p' || esc == 'P')
	{
		double x, y;
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		system("cls");

		bool result = (y >= -0.5 && (y - x) <= 0 && pow(y, 2) + pow((x - 1), 2) <= 1);
		if (result)
		{

			cout << "Point (" << x << " ;" << y << ") belongs to seted area" << endl;

		}
		else
		{

			cout << "Point (" << x << " ;" << y << ") doesn't belong to seted area" << endl;

		}

		cout << "Press \"p\" key to continue" << endl;
		cin >> esc;
		system("pause");
		system("cls");
	}

	return 0;
}