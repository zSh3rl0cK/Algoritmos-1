#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char nome[20];
	char sobrenome[200];
	char nome_completo[220];
	int t;
	
	setlocale(LC_ALL,"");
	
	cin.getline(nome, 20); //um cin de até 20 letras para o nome
	cin.getline(sobrenome, 200);
	
	strcpy(nome_completo, nome);
	strcat(nome_completo, " ");
	strcat(nome_completo, sobrenome);
	
	
	cout << "Salve " << nome_completo << ", como que clica em tu?" << endl; 
	
	t = strlen(nome);
	cout << t << endl;
				
	return 0;
}