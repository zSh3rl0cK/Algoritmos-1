#include <iostream>

using namespace std;

int main()
{
	
	int i; //contador
	int quant; //quantidade de numeros
	int soma; //soma dos numeros
	
	cin >> quant;
	
	soma = 0;
	for(i = 0; i <= quant; i+=1)
	{
		soma = soma + i;
	}
	cout << soma << endl;
	
	return 0;
}