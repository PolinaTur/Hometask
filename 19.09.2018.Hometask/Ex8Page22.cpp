#include <iostream>;

using namespace std;

int main()
{
	cout << "Enter numbers equal 0 to exit" << endl;
	while (true)
	{
		unsigned int side1, side2, side3;
		cout << "Enter the signification of the first side, side1= ";
		cin >> side1;
		cout << "Enter the signification of the  second side, side2= ";
		cin >> side2;
		cout << "Enter the signification of the third side, side3= ";
		cin >> side3;
		system("cls");
		if (side1 == side2 && side2 == side3)
		{
			cout << "This triangle is equilateral" << endl;
		}
		else if (side1 == side2 || side2 == side3 || side1 == side3)
		{
			cout << "This triangle is isosceles" << endl;
		}
		else
		{
			cout << "This triangle is versatile" << endl;
		}
		system("pause");
	}

	return 0;
}