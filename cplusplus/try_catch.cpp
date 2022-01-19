#include <iostream>
#include <exception>
using namespace std;
class Base
{
	public:
		float num1, num2;
	void read_values()
	{
		cout << "Enter two numbers: ";
		cin >> num1 >> num2;
	}
	void calculate()
	{
	try
	{
		if (num2 == 0)
			throw num2;
		else
			cout << "Division of two numbers: " << num1 / num2;
	}
	catch (float x)
	{
		cout << "Divide by zero exception caught!"<< endl;
	}
	}
};

int main()
{
	Base obj;
	obj.read_values();
	obj.calculate();
	return 0;
}
