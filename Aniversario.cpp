#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
	char dia[15];
	int certo = 0;
	
	setlocale(LC_ALL, "");
	
	cout << "Humm... Esqueci que dia � hoje." << endl;
	cout << "Escreva que dia � hoje pra eu lembrar." << endl;
	cout << endl;
	
	
	do
	{
		cin.getline(dia, 15);
		cout << endl;
		
		if(strcmp(dia, "sexta") == 0)
		{
			cout << "Acertou! Mas t� errado tamb�m" << endl;
			cout << "Hoje deveria ser um feriado na verdade." << endl;
			certo = 1;
		}
		else
		{
			cout << "Acho que hoje n�o � esse dia n�o" << endl;
			cout << "Tenta de novo, n�o esquece de por tudo min�sculo." << endl;
			cout << endl;
		}
	}while(certo != 1);
		
	return 0;
}