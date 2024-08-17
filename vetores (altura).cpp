#include <iostream>

using namespace std;

int main()
{
	
	float alturas[5]; //altura em metros
	int maisAlto; // pessoa mais alta
	float maiorAltura; //maior altura
	int i; // contador

	//lendo as alturas e armazenando elas no vetor
	for(i = 0; i < 5; i++)
		cin >> alturas[i];	
	
	//encontrando a pessoa mais alta
	maiorAltura = 0;
	for(i = 0; i < 5; i++)
	{
		if(alturas[i] > maiorAltura)
		{
			maiorAltura = alturas[i];
			maisAlto = i;
		}
	}	
	
	cout << "Maior altura: " << maiorAltura << endl;
	cout << "Indivíduo mais alto: " << maisAlto << endl;	
	
	return 0;
}