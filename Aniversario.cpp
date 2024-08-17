#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
	char dia[15];
	int certo = 0;
	
	setlocale(LC_ALL, "");
	
	cout << "Humm... Esqueci que dia é hoje." << endl;
	cout << "Escreva que dia é hoje pra eu lembrar." << endl;
	cout << endl;
	
	
	do
	{
		cin.getline(dia, 15);
		cout << endl;
		
		if(strcmp(dia, "sexta") == 0)
		{
			cout << "Acertou! Mas tá errado também" << endl;
			cout << "Hoje deveria ser um feriado na verdade." << endl;
			certo = 1;
		}
		else
		{
			cout << "Acho que hoje não é esse dia não" << endl;
			cout << "Tenta de novo, não esquece de por tudo minúsculo." << endl;
			cout << endl;
		}
	}while(certo != 1);
		
	return 0;
}