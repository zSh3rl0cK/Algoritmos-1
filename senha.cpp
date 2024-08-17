#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char senha[20];
	
	setlocale(LC_ALL, "");
	cin.getline(senha, 20);
	while(strcmp(senha, "Abre-te aspas!") != 0)
	{
		cout << "Nem sabe a senha qq é isso" << endl;
		cin.getline(senha, 20);
	}
	
	cout << "Vai entrar por que doido? Tem dinheiro ai?" << endl;
				
	return 0;
}