#include <iostream>
#include <exception>
using namespace std;
class Exception
{
	public:
		int num1, num2;
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
				else if (num2 > 0)
					cout << "Division: " << num1 / num2 << endl;
				else
					throw num2;
			}
			catch(int value)
			{
				if (num2 == 0)
					cout << "Divide by zero. Exception caught." << endl;
				else
					cout << "num2 should be positive" << endl;
			}
			catch(...)
			{
				if (num2 == 0)
					cout << "Divide by zero! Exception caught" << endl;
				else
					cout << "num2 should be positive" << endl;
			}
		}
};
int main()
{
	Exception obj;
	obj.read_values();	
	obj.calculate();
	return 0;

}
