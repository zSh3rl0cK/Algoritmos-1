#include <iostream>

using namespace std;

int main()
{
	
	int x;
	int y;

	while(x > y || x < y)
	{
		cin >> x >> y;
		if(x > y)
			cout << "Decrescente\n";
		else if(x < y)
		{
			cout << "Crescente\n";
		}
		else{}
		
	}
		
	return 0;
}