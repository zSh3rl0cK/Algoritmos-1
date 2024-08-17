#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	int i;
	int N;
	int q;
	
	setprecision(0);
	cin >> N;
	for(i = 1; i <= N; i++)
	{
		if(i%2 == 0)
		{
			q = pow(i,2);
			cout << i << "^2 = " << q << endl;
		}
	}
		
	return 0;
}