#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
	char nome[20]; //nome dos jogos a serem inseridos
	char tentativa[5]; //nova tentativa sim ou nao
	
	//permitindo acentos nas palavras
	setlocale(LC_ALL, "");
	
	//comentarios primeira fase
	cout << "Teste seus conhecimentos sobre jogos!\n";
	cout << "Este jogo � um quiz com v�rios jogos!\n";
	cout << "\n";
	cout << "A cada n�vel, voc� dever� acertar o nome de um jogo por uma frase caracter�stica dele\n";
	cout << "N�o se esque�a, voc� deve inserir o nome do jogo com todos os caracteres min�sculos\n";
	cout << "\n";
	
	cout << "Come�ando... N�vel 1 - Muito F�cil\n";
	cout << "\n";
	cout << "Primeira frase do jogo!\n";
	cout << "The bomb has been planted.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "counter strike") == 0)
		cout << "Nem vou te dar parab�ns, essa todos sabem\n";
	else
	{
		cout << "Como voc� n�o sabe? Isso era para ser imposs�vel de errar.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "T�, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "counter strike") == 0)
	   	   	{
				cout << "Finalmente\n";
				break;
			}
			else
			{
				cout << "Voc� n�o deveria mais jogar esse jogo.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	
	//iniciando a fase 2
	
	cout << "\n";	
	cout << "Vamos para a pr�xima frase. A mais conhecida de todas, apenas.\n";
	cout << "Desculpe, estou em outro castelo.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "super mario") == 0)
		cout << "N�o vou te dar parab�ns n�o\n";
	else
	{
		cout << "Como voc� n�o sabe? Isso era para ser imposs�vel de errar.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "T�, insira o nome correto agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "super mario") == 0)
	   	   	{
				cout << "As vezes voc� so errou como escrevia\n";
				break;
			}
			else
			{
				cout << "Vai parar de jogar quando?.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	
	cout << "\n";
	cout << "Inclusive as respostas desse primeiro level s�o:\n";
	cout << "Counter Strike.\n";
	cout << "Super mario.\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Come�ando... Level 2 - F�cil\n";
	cout << "\n";
	cout << "Primeira frase:\n";
	cout << "N�s trabalhamos nas sombras para servir a luz. N�s somos...\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "assassins creed") == 0)
		cout << "Que bom que voc� acertou.\n";
	else
	{
		cout << "N�o te julgo, mas voc� merece ser julgado.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "T�, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "assassins creed") == 0)
	   	   	{
				cout << "Por que eu te daria parab�ns?\n";
				break;
			}
			else
			{
				cout << "Como voc� conseguiu essa proeza?.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	
	cout << "\n";
	cout << "Ok. Vamos para a segunda frase ent�o\n";
	cout << "� perigoso ir sozinho, leve isso...\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "the legend of zelda") == 0)
		cout << "Magn�fio, simplesmente uma obra prima\n";
	else
	{
		cout << "Era t�o ic�nica, como??.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "T�, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "zelda") == 0)
	   	   	{
				cout << "Ao menos agora tu acertou\n";
				break;
			}
			else
			{
				cout << "Para de jogar.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "As respostas desse level s�o:\n";
	cout << "Assassins Creed\n";
	cout << "Zelda\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Iniciando... level 3 - M�dio\n";
	cout << "N�o se esque�a, voc� deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, vamos l�!\n";
	cout << "� um dia bonito l� fora. Os p�ssaros cantam, as flores florescem.\n"; 
	cout << "Em dias como estes, as crian�as como voc� ... Deveriam queimar no inferno\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "undertale") == 0)
		cout << "Mais uma obra prima, parab�ns.\n";
	else
	{
		cout << "Dica: um dos maiores jogos indies.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "V� se coloca o nome corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "undertale") == 0)
	   	   	{
				cout << "Tomara que antes tenha sido s� um erro de digita��o\n";
				break;
			}
			else
			{
				cout << "Tu n�o cansa de ser um fracasso n�o?\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase:\n";
	cout << "Se voc� est� atravessando o inferno, bem, continue andando.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "dark souls") == 0)
		cout << "To devendo de terminar esse jogo, parab�ns.\n";
	else
	{
		cout << "Errar deveria ser humano.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Acerta o jogo agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "dark souls") == 0)
	   	   	{
				cout << "Demorou mas ok\n";
				break;
			}
			else
			{
				cout << "N�o � todo mundo que joga mesmo.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase, ela � incr�vel\n";
	cout << "N�o existe perd�o. As pessoas n�o esquecem. Nada � perdoado.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "red dead redemption") == 0)
		cout << "Que bom que tu acertou\n";
	else
	{
		cout << "Como tu errou a do jogo do s�culo?.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "T�, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "red dead redemption") == 0)
	   	   	{
				cout << "Agora acertou, que coisa\n";
				break;
			}
			else
			{
				cout << "As vezes desistir vale mais a pena\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "As respostas do level eram:\n";
	cout << "Undertale\n";
	cout << "Dark Souls\n";
	cout << "Red Dead Redemption\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Come�ando... level 4 - D�ficil!\n";
	cout << "N�o se esque�a, voc� deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, boa sorte.\n";
	cout << "Um rei eleito pelo povo n�o � um governante, mas um devedor.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "the witcher") == 0)
		cout << "Acertou um que deveria ser dif�cil, a� sim\n";
	else
	{
		cout << "Queria s� ver o que que voc� chutou pra errar isso\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Acerta a�, o jogo � t�o bom\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "the witcher") == 0)
	   	   	{
				cout << "Deve s� ter escrito errado, s� vamo\n";
				break;
			}
			else
			{
				cout << "Fazer o que, level 4 n�\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase, acho que ela � mais dif�cil\n";
	cout << "Todos n�s fazemos escolhas na vida, mas no final nossas escolhas nos fazem.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "bioshock") == 0)
		cout << "Essa eu n�o acertava, parab�ns\n";
	else
	{
		cout << "Eu tamb�m erraria.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Boa sorte a�\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "bioshock") == 0)
	   	   	{
				cout << "Bel�ssimo\n";
				break;
			}
			else
			{
				cout << "T� parecendo eu.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a �ltima frase, ela nem � t�o dif�cil assim\n";
	cout << "O que � um homem� al�m de uma miser�vel pilha de segredos!\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "castlevania") == 0)
		cout << "Um cl�ssico, n�o �?\n";
	else
	{
		cout << "Eu n�o acertaria tamb�m, nunca joguei.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou n�o)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Eu confio?\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "castlevania") == 0)
	   	   	{
				cout << "Acertou mesmo, que coisa\n";
				break;
			}
			else
			{
				cout << "O �ltimo e voc� errando ainda\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou n�o)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "As respostas do �ltimo level eram:\n";
	cout << "The Witcher\n";
	cout << "Bioshok\n";
	cout << "Castlevania\n";
	
	return 0;
}