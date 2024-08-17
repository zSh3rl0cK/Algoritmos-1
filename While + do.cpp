#include <iostream>

using namespace std;

int main()
{
	
	int i;
	
	i = 0;
	cin >> i;
	while(i != 10)
	{
		cout << i << endl;
		cin >> i;
	}
	
	do
	{
		cout << i << endl;
	}
	while(i < 10);
	
	return 0;
}