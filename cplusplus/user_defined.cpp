#include <iostream>
#include <exception>
using namespace std;
class Base: public exception
{
	public:
		const char* what() const throw()
		{
			return "Exception caught: divide by zero!";
		}
};
int main()
{
	try
	{
		float num1, num2;
		cout << "Enter two numbers: " << endl;
		cin >> num1 >> num2;
		if(num2 == 0)
		{
			Base obj;
			throw obj;
		}
		else
			cout << "Division: " << num1 / num2 << endl;
	}
	catch(exception& obj)
	{
		cout << obj.what() << endl;
	}
	return 0;

}
