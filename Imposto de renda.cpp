#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	float valor;
	float imposto;
	
	cin >> valor;
	
	cout << fixed << setprecision(2);
	if(valor > 0.00 && valor <= 2000.00)
	{
		cout << "Isento" << endl;
	}
	else if(valor > 2000.00 && valor <= 3000.00)
	{
		imposto = (valor-2000.00)*0.08;
		cout << "R$ " << imposto << endl;
	}
	else if(valor > 3000.00 && valor <= 4500)
	{
		imposto = 80 + (valor-3000)*0.18;
		cout << "R$ " << imposto << endl;
	}
	else if(valor > 4500)
	{
		imposto = 350 + (valor-4500)*0.28;
		cout << "R$ " << imposto << endl;
	}
	
	return 0;
}