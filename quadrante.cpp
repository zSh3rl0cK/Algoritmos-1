#include <iostream>

using namespace std;

int main()
{
	
	int x;
	int y;
	
	while(x != 0 && y != 0)
	{
		cin >> x >> y;
		
		if(x > 0 && y > 0)
		{
			cout << "primeiro" << endl;
		}
		else if(x > 0 && y < 0)
		{
			cout << "quarto\n";
		}
		else if(x < 0 && y > 0)
		{
			cout << "segundo\n";
		}
		else if(x < 0 && y < 0)
		{
			cout << "terceiro\n";
		}
		else{}
	}
		
	return 0;
}