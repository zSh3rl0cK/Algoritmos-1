#include <iostream>
using namespace std;

int main()
{
	
	float celsius;
	float fahreinheit;
	
	cin >> celsius;
	fahreinheit = ((celsius/5)*9)+32;
	
	cout << fahreinheit << endl;
	
	return 0;
}