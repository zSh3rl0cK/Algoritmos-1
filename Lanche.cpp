#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int codigo;
	int quantidade;
	float total;
	
	cin >> codigo;
	cin >> quantidade;
	
	cout << fixed << setprecision(2);
	
	if(codigo == 1){
		total = 4.00*quantidade;
	cout << "Total: R$ " << total << endl;
	}
	
	if(codigo == 2){
		total = 4.50*quantidade;
	cout << "Total: R$ " << total << endl;
	}
	
	if(codigo == 3){
		total = 5.00*quantidade;
	cout << "Total: R$ " << total << endl;
	}
	
	if(codigo == 4){
		total = 2.00*quantidade;
	cout << "Total: R$ " << total << endl;
	}
	
	if(codigo == 5){
		total = 1.50*quantidade;
	cout << "Total: R$ " << total << endl;
	}
	
	return 0;
}