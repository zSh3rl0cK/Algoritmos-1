#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {
	double A;
	double n;
	double raio;
	
	cin >> raio;
	n = 3.14159;
	A = n*pow(raio,2);
	
	cout << fixed << setprecision(4);
	cout << "A:" << A << endl;
	
    return 0;
}