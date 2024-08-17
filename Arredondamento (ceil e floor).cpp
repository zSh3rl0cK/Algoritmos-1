#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	float X;
	int arred1;
	int arred2;
	
	cin >> X;
	arred1 = ceil(X);
	arred2 = floor(X);
	
	cout << arred1 << endl;
	cout << arred2 << endl;
	
	return 0;
}