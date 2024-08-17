#include <iostream>

using namespace std;

int main()
{
	
	int i;
	int n;
	int numero;
	int soma;
	
	cin >> n; // quantidade de numeros para serem somados
	
	soma = 0;
	for(i = 0; i < n; i++)
	{
		cin >> numero;
		soma = soma + numero;
	}
	
	cout << "Soma = " << soma << endl;

	return 0;
}