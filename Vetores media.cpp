#include <iostream>

using namespace std;

int main()
{	
	
	int notas[5];
	int soma;
	int i;
	float media;
	
	for(i = 0; i < 5; i++)
	{
		cin >> notas[i];
	}
	
	soma = 0;
	for(i = 0; i < 5; i++)
		soma += notas[i]; //soma = soma + notas
	
	media = 1.0*soma/3;
	
	cout << "Media = " << media << endl;
		
	return 0;
}