#include <iostream>
#include <cmath>
#include <locale.h>
#include <cstring>

using namespace std;

void pegar_dia(int d, int m, int a, int &ds)
{
	int g , f;
	float intp , fracp , intpa , fracpa , frac , in , n , delta;
	
	if(m <= 2)
	{
		g = a - 1;
		f = m + 13;
	}
	else
	{
		g = a;
		f = m + 1;
	}
	
	fracp = modf((365.25*g), &intp);
	fracpa = modf((30.6*f), &intpa);
	n = intp + intpa - 621049 + d;
	
	if(n < 36523)
	{
		delta = 2;
	}
	else if(n >= 36523 && n < 73048)
	{
		delta = 1;
	}
	else if(n >= 73048)
	{
		delta = 0;
	}
	
	frac = modf((n/7), &in);
	ds = round((frac)*7) + delta + 1;
}

int main()
{
	
	int d , m , a , ds;
	char nome[100];
	int esc;
	
	setlocale(LC_ALL,"");
	
	cout << "Ol�! Vamos fazer seu cadastro na plataforma Pedro.net" << endl;
	cout << "Comece inserindo seu primeiro nome:" << endl;
	cout << "(OBS: apenas a primeira letra deve ser mai�scula)" << endl;
	
	cout << endl;
	cin.getline(nome, 50);
	cout << endl;
	
	cout << "�timo. Agora insira sua data de nascimento" << endl;
	cout << "(OBS: apenas os n�meros separadamente e na seguinte ordem: dia, m�s e ano)." << endl;
	cout << "Exemplo: 3 7 2012" << endl;
	
	cout << endl;
	cin >> d;
	cin >> m;
	cin >> a;
	cout << endl;
	
	pegar_dia(d, m, a, ds);
	
	if((ds == 3) && (strcmp(nome, "Felipe") == 0))
	{
		cout << "Ohh! Parece que temos uma pessoa 'interessante' se cadastrando aqui." << endl;
		cout << "Insira a data de  hoje no mesmo formato anterior. " << endl;
		cout << endl;
		
		cin >> d;
		cin >> m;
		cin >> a;
		cout << endl;
		
		pegar_dia(d, m, a, ds);
		
		if(ds == 5)
		{
			cout << "Eu sabia! Temos um aniversariante entre n�s!" << endl;
			cout << "Mais que isso, � o anivers�rio de algu�m que o dono da plataforma conhece!" << endl;
			cout << "Como esta � a plataforma Pedro.net voc� tem direito a uma mensagem especial." << endl;
			cout << endl;
			
			cout << "Digite 1 para ver a mensagem e 2 para pular" << endl;
			cin >> esc;
			cout << endl;
			
			if(esc == 1)
			{
				cout << "UMM Grande anivers�rio desejado ser� voce a. (essa parte j� era �bvia que ia ter)\n";
				cout << "Fechad�o com o #jap�o2028 cari�o aahhhahh.\n";
				cout << endl;
				cout << "Boa sorte a� com a vida e que venham 34 dias e 33 noites viradas no c�lculo\n";
				cout << "Eu ainda provavelmente vou esquecer muitas coisas ent�o relaxa\n";
				cout << "Obs: esse semestre vou evitar o pessismismo (n�o duvide)\n";
				cout << endl;
				cout << "GG! Parb�ns de verdade. Faltou s� uma m�sica de fundo agora.\n Culpa do C++ \n Ano que vem te fa�o um jogo (n�o no construct)";
			}
			
			else
			{
				cout << "Cadastro conclu�do (algo errado acontecido deve ter)!\n";
			}
		}
		else
		{
			cout << "Cadastro conclu�do (o que voc� errou?)!\n";
		}
	}
	else
	{
		cout << "Parab�ns, agora voc� pode entrar em nossa plataforma (voc� errou algo n�?)\n";
	}
	
	return 0;
}