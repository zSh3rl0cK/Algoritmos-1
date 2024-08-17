#include <iostream>

using namespace std;

int main()
{
	
	int X;
	int Y;
	int Z;
	int X1;
	int Y1;
	int Z1;
	int aux;
	
	cin >> X;
	cin >> Y;
	cin >> Z;
	
	X1 = X;
	Y1 = Y;
	Z1 = Z;
	
	if(X < Y){
		aux = X;
		X = Y;
		Y = aux;
	}
	if(X < Z){
		aux = X;
		X = Z;
		Z = aux;
	}
	if(Z < Y){
		aux = Z;
		Z = Y;
		Y = aux;
	}
	
	
	
	return 0;
}