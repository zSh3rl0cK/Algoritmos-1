#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	ifstream arq; // handle para ler do arquivo
	char nomearq[100]; // nome do arquivo onde estao os dados
	char nomefilme[100]; // nome do filme
	int ano; // ano do filme
	
	// lendo nome do arquivo
	cin.getline(nomearq, 100);
	
	// abrindo arquivo para leitura
	arq.open(nomearq, ifstream::in);
	
	while(!arq.eof())
	{
	// lendo dados do arquivo
	arq.getline(nomefilme, 100);
	arq >> ano;
	arq.ignore();
	
	// mostrando as informacoes
	cout << "filme: " << nomefilme << endl;
	cout << "Ano: " << ano << endl;
	}
	
	// fechando o arquivo
	arq.close();
	
	return 0;
}