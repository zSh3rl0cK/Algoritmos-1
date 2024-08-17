#include <iostream>

using namespace std;

int main()
{
	
	int X;
	int Y;
	int Z;
	
	cin >> X;
	cin >> Y;
	cin >> Z;
	
	if(X > Y && X > Z && Y > Z){
		cout << Z << " " << Y << " " << X << endl;
		}
	
	if(X > Z && Y > Z && Y > X){
		cout << Z << " " << X << " " << Y << endl;
		}
	
	if(X > Y && X > Z && Y < Z){
		cout << Y << " " << Z << " " << X << endl;
		}
	
	if(X > Y && X < Z && Y < Z){
		cout << Y << " " << X << " " << Z << endl;
		}
	
	if(Z > X && Y > X && Y > Z){
		cout << X << " " << Z << " " << Y << endl;
		}
	
	if(Z > X && Y > X && Y < Z){
		cout << X << " " << Y << " " << Z << endl;
	}
	
	return 0;
}