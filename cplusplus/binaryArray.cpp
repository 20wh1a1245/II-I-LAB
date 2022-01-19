#include <iostream>
using namespace std;
int main() 
{
	int n,count=0,i,temp;
	cout << "Enter number of elements: ";
	cin >> n;
	int binary[n];
	for(i =0; i < n; i++)
	{
		cin >> binary[i];
	}
	for(i = 0; i<n; i++)
	{
		if(binary[i] == 1)
		{
			count++;
			if(binary[i+1] == 0)
			{
				if(count >= temp)
				{
					temp = count;
					count = 0;
				}
			}
			else if(count >= temp)
			{
				temp = count;
			}
		}
		else
		{
			continue;
		}
	}
	if(temp == 1)
	{
		temp = 0;
	}
	cout << temp;
	return 0;
}
