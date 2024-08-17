#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	double A , B , C;
	double R1 , R2 , delta;
	
	cin >> A;
	cin >> B;
	cin >> C;
	delta = pow(B,2)-4*A*C;
	R1 = (-B + sqrt(delta))/2*A;
	R2 = (-B - sqrt(delta))/2*A;
	
	if (A == 0 || delta < 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		cout << fixed << setprecision(5) << endl;
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}


	
	return 0;
}