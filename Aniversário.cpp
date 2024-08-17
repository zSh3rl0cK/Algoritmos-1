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
	
	cout << "Olá! Vamos fazer seu cadastro na plataforma Pedro.dias" << endl;
	cout << "Comece inserindo seu primeiro nome:" << endl;
	cout << "(OBS: apenas a primeira letra deve ser maiúscula)" << endl;
	
	cout << endl;
	cin.getline(nome, 50);
	cout << endl;
	
	cout << "ótimo. Agora insira sua data de nascimento" << endl;
	cout << "(OBS: apenas os números e na seguinte ordem: dia, mês e ano)." << endl;
	cout << "Exemplo: 3 7 2012" << endl;
	
	cout << endl;
	cin >> d;
	cin >> m;
	cin >> a;
	cout << endl;
	
	pegar_dia(d, m, a, ds);
	
	if((ds == 2) && (strcmp(nome, "Alisson") == 0))
	{
		cout << "Ohh! Parece que temos uma pessoa específica se cadastrando aqui." << endl;
		cout << "Insira a data de  hoje no mesmo formato anterior. " << endl;
		cout << endl;
		
		cin >> d;
		cin >> m;
		cin >> a;
		cout << endl;
		
		pegar_dia(d, m, a, ds);
		
		if(ds == 6)
		{
			cout << "Eu sabia! Temos um aniversariante entre nós!" << endl;
			cout << "Mais que isso, é o aniversário de alguém muito especial" << endl;
			cout << "Como esta é a plataforma Pedro.dias você tem direito a uma mensagem especial." << endl;
			cout << endl;
			
			cout << "Digite 1 para ver a mensagem e 2 para pular" << endl;
			cin >> esc;
			cout << endl;
			
			if(esc == 1)
			{
				cout << "Feliz aniversário!!! (essa parte já era óbvia que ia ter)\n";
				cout << "Só tenho a agradecer por tudo que você fez até hoje.\n";
				cout << endl;
				cout << "Hoje é o dia do melhor pai que alguém pode ter e também do melhor gerente que uma empresa pode ter!\n";
				cout << "Prepare-se porque ainda vai ter muita bagunça de um monstrinho chamado lilica\n";
				cout << "E muitas reclamações de provas difíceis a serem feitas por um certo futuro engenheiro aí\n";
				cout << endl;
				cout << "Por fim, parabéns!\n (Faltou só a trilha sonora de top gun tocando de fundo)\n";
			}
			
			else
			{
				cout << "Cadastro concluído!\n";
			}
		}
		else
		{
			cout << "Cadastro concluído!\n";
		}
	}
	else
	{
		cout << "Parabéns, agora você pode entrar em nossa plataforma\n";
	}
	
	return 0;
}