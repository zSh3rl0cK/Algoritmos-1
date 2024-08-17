#include <iostream>

using namespace std;

int main()
{
	
	int i;
	int n;
	int numero;
	int soma;
	float media;
	
	cin >> n; // quantidade de numeros para serem somados
	soma = 0;
	
	for(i = 0; i < n; i++)
	{
		cin >> numero; // numeros a serem somados
		soma = soma + numero;
	}
	media = (float)soma/n; // (float) para que a variável soma seja float, pois ela é inteira e n tbm (int/int = int)
	
	cout << "Soma = " << soma << endl;
	cout << "Media = " << media << endl;
	
	
	
	return 0;
}