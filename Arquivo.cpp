#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	ofstream arq; // handle para escrever no arquivo
	char nomearq[100]; // nome do arquivo
	char nomefilme[100]; // nome do filme
	int ano; // ano do filme
	
	// lendo o nome do arquivo
	cout << "Nome do arquivo: " << endl;
	cin.getline(nomearq, 100);
	
	// abrindo o arquivo para escrita
	arq.open(nomearq, ofstream::out);
	
	// lendo os dados do filme
	cout << "Nome do filme: " << endl;
	cin.getline(nomefilme, 100);
	cout << "ano" << endl;
	cin >> ano;
	
	// escrevendo as informações no arquivo
	arq << nomefilme << endl;
	arq << ano << endl;
	
	
	return 0;
}