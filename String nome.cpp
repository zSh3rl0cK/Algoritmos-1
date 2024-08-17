#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	char nome[200];
	int t;
	
	strcpy(nome, "Marco"); //copia marco para o nome
	cout << nome << endl;
	
	t = strlen(nome); //retorna o comprimento do nome
	cout << "t = " << t << endl;
				
	return 0;
}