#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	
	int NUMBER;
	int HOURS;
	float SPHOUR;
	float SALARY;
	
	cin >> NUMBER;
	cin >> HOURS;
	cin >> SPHOUR;
	SALARY = HOURS*SPHOUR;
	
	cout << "NUMBER = " << NUMBER << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << SALARY << endl;
	
    return 0;
}