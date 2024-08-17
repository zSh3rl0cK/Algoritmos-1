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
	
	cout << "Ol�! Vamos fazer seu cadastro na plataforma Pedro.dias" << endl;
	cout << "Comece inserindo seu primeiro nome:" << endl;
	cout << "(OBS: apenas a primeira letra deve ser mai�scula)" << endl;
	
	cout << endl;
	cin.getline(nome, 50);
	cout << endl;
	
	cout << "�timo. Agora insira sua data de nascimento" << endl;
	cout << "(OBS: apenas os n�meros e na seguinte ordem: dia, m�s e ano)." << endl;
	cout << "Exemplo: 3 7 2012" << endl;
	
	cout << endl;
	cin >> d;
	cin >> m;
	cin >> a;
	cout << endl;
	
	pegar_dia(d, m, a, ds);
	
	if((ds == 2) && (strcmp(nome, "Alisson") == 0))
	{
		cout << "Ohh! Parece que temos uma pessoa espec�fica se cadastrando aqui." << endl;
		cout << "Insira a data de  hoje no mesmo formato anterior. " << endl;
		cout << endl;
		
		cin >> d;
		cin >> m;
		cin >> a;
		cout << endl;
		
		pegar_dia(d, m, a, ds);
		
		if(ds == 6)
		{
			cout << "Eu sabia! Temos um aniversariante entre n�s!" << endl;
			cout << "Mais que isso, � o anivers�rio de algu�m muito especial" << endl;
			cout << "Como esta � a plataforma Pedro.dias voc� tem direito a uma mensagem especial." << endl;
			cout << endl;
			
			cout << "Digite 1 para ver a mensagem e 2 para pular" << endl;
			cin >> esc;
			cout << endl;
			
			if(esc == 1)
			{
				cout << "Feliz anivers�rio!!! (essa parte j� era �bvia que ia ter)\n";
				cout << "S� tenho a agradecer por tudo que voc� fez at� hoje.\n";
				cout << endl;
				cout << "Hoje � o dia do melhor pai que algu�m pode ter e tamb�m do melhor gerente que uma empresa pode ter!\n";
				cout << "Prepare-se porque ainda vai ter muita bagun�a de um monstrinho chamado lilica\n";
				cout << "E muitas reclama��es de provas dif�ceis a serem feitas por um certo futuro engenheiro a�\n";
				cout << endl;
				cout << "Por fim, parab�ns!\n (Faltou s� a trilha sonora de top gun tocando de fundo)\n";
			}
			
			else
			{
				cout << "Cadastro conclu�do!\n";
			}
		}
		else
		{
			cout << "Cadastro conclu�do!\n";
		}
	}
	else
	{
		cout << "Parab�ns, agora voc� pode entrar em nossa plataforma\n";
	}
	
	return 0;
}