#include <iostream>

using namespace std;

int main()
{
	
	int i;
	int n;
	int m;
	
	m = 0;
	for(i = 0; i < 5; i++)
	{
		cin >> n;
		if(n%2 == 0)
			m = m + 1;
	}

cout << m << " valores pares" << endl;
	
	return 0;
}