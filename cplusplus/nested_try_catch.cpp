#include <iostream>
#include <exception>
using namespace std;
class Exception
{
	public:
		float num1, num2;
	void read_values()
	{
		cout << "Enter two numbers: ";
		cin >> num1 >> num2;
	}
	void try_catch()
	{
		try
		{
			try
			{
				if (num2 == 0)
					throw num2;
				else
					cout << "Division: " << num1 / num2 << endl;
			}
			catch(float x)
			{
				cout << "Divide by zero, Exception caught1" << endl;
				throw;
			}
		}
		catch(float x)
		{
			cout << "Divide by zero, Exception caught2" << endl;
		}
	}
};
int main()
{
	Exception obj;
	obj.read_values();
	obj.try_catch();
	return 0;
}
