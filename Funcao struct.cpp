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
	info filme; //armazena os dados de um filme
	
	//lendo daodos do filme
	cin.getline(filme.nome, 100);
	cin >> filme.ano;
	
	cout << "Nome: " << filme.nome << endl;
	cout << "Ano: " << filme.ano << endl;
	
	return 0;
}