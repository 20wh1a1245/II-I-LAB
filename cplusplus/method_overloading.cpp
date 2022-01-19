#include <iostream>
using namespace std;
class addition
{
	public:
		int addMethod(int x, int y)
		{
			return x + y;
		}
		int addMethod(int x, int y, int z)
		{
			return x + y + z;
		}
		int addMethod(int w, int x, int y, int z)
		{
			return w + x + y + z;
		}
};
int main(void)
{
	addition add;
	int w, x, y, z;
	cout << "Enter w, x, y, z: ";
	cin >> w >> x >> y >> z;
	cout << add.addMethod(x, y) << endl;
	cout << add.addMethod(x, y, z) << endl;
	cout << add.addMethod(w, x, y, z) << endl;
	return 0;
}
