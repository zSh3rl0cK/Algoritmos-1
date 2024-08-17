#include <iostream>

using namespace std;

void soma(int V[], int tam, int &S1, int S2)
{
	int i;
	S1 = 0;
	S2 = 1;
	
	for(i = 0; i < tam; i++)
	{
		S1 += V[i];
		S2 *= V[i];
	}
};

int main()
{
	int V[5]; // armazena dados
	int N; // numero de elementos inseridos
	int i; // contador
	int S = 0; // soma dos elementos
	int P; // produto dos elementos
	
	// lendo o numero de elementos
	cin >> N;
	for(i = 0; i < N; i++)
		cin >> V[i];
	
	// Lembrar que dentro é so o nome da variável
	soma(V, N, S); 
	
	// imprimindo a aoma
	cout << "Soma = " << S << endl;
	cout << "Produto = " << P << endl;
	
	return 0;
}