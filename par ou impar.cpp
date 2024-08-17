#include <iostream>

using namespace std;

int main()
{
	
	int N;
	int i;
	int n;
	
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin >> n;
		if(n%2 == 0 && n < 0)
		{
			cout << "EVEN NEGATIVE" << endl;
		}
		else if(n%2 == 0 && n > 0)
		{
			cout << "EVEN POSITIVE" << endl;
		}
		else if(n%2 != 0 && n < 0)
		{
			cout << "ODD NEGATIVE" << endl;
		}
		else if(n%2 != 0 && n > 0)
		{
			cout << "ODD POSITIVE" << endl;
		}
		else
		{
			cout << "NULL" << endl;
		}
	}
		
	return 0;
}