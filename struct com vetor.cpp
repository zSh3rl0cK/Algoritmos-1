#include <iostream>
#include <cstring>

using namespace std;

//uma variavel para guardar muitas informacoes
struct info
{
	char nome[100];
	int ano;
	
};


int main()
{
	info filme[5]; //armazena os dados de um filme
	int n; //numero de filmes
	int i; //contador
	
	//lendo o numer ode filmes
	cin >> n;
	
	//lendo daodos do filme
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(filme[i].nome, 100);
		cin >> filme[i].ano;
	}
	
	for(i = 0; i < n; i++)
	{
		cout << "Nome: " << filme[i].nome << endl;
		cout << "Ano: " << filme[i].ano << endl;
	}
	
	return 0;
}