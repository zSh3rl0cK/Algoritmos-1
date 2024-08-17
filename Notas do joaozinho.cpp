#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	
	int N; //numero de alunos
	int i; //contador 1
	int j; //contador 2
	float nota[4]; //notas das quatro provas
	float media; //media das notas
	char nome[100]; //nome do aluno
	
	//inserindo o numero de alunos
	cin >> N;
	
	//definindo o numero de casas
	cout << fixed << setprecision(2);
	
	//lendo o nome do aluno e suas notas para calcular e imprimir sua media
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(nome, 20);
		
		for(j = 0; j < 4;j++)
			cin >> nota[j];
		
		media = (nota[0] + 2*nota[1] + 3*nota[2] + 4*nota[3])/10;
		
		cout << nome << ": " << media << endl;
	}
	
	return 0;
}