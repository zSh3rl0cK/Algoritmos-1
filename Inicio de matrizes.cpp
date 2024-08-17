#include <iostream>

using namespace std;

void soma(int V[], int tam, int S)
{
	int i;
	int S=0;
	
	// soma dos elementps
	for(i = 0; i < tam; i++)
		S += V[i];
	
	
	return S;
};

int main()
{
	int V[5]; // armazena dados
	int N; // numero de elementos inseridos
	int i; // contador
	int S;
	
	// lendo o numero de elementos
	cin >> N;
	for(i = 0; i < N; i++)
		cin >> V[i];
	
	// Lembrar que dentro é so o nome da variável
	S = soma(V, N); 
	
	// imprimindo a aoma
	cout << "Soma = " << S << endl;
	
	return 0;
}