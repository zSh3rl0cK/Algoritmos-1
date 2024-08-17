#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x;
	int y;
	float result;
	
	x = 9;
	y = 2;
	result = pow(y,3); 
	
	cout << fixed << setprecision(2); // mostra com 2 casas
	cout << "result = " << result << endl;
	
	return 0;
}