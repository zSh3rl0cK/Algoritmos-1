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
	cout << "Este jogo é um quiz com vários jogos!\n";
	cout << "\n";
	cout << "A cada nível, você deverá acertar o nome de um jogo por uma frase característica dele\n";
	cout << "Não se esqueça, você deve inserir o nome do jogo com todos os caracteres minúsculos\n";
	cout << "\n";
	
	cout << "Começando... Nível 1 - Muito Fácil\n";
	cout << "\n";
	cout << "Primeira frase do jogo!\n";
	cout << "The bomb has been planted.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "counter strike") == 0)
		cout << "Nem vou te dar parabéns, essa todos sabem\n";
	else
	{
		cout << "Como você não sabe? Isso era para ser impossível de errar.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Tá, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "counter strike") == 0)
	   	   	{
				cout << "Finalmente\n";
				break;
			}
			else
			{
				cout << "Você não deveria mais jogar esse jogo.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	
	//iniciando a fase 2
	
	cout << "\n";	
	cout << "Vamos para a próxima frase. A mais conhecida de todas, apenas.\n";
	cout << "Desculpe, estou em outro castelo.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "super mario") == 0)
		cout << "Não vou te dar parabéns não\n";
	else
	{
		cout << "Como você não sabe? Isso era para ser impossível de errar.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Tá, insira o nome correto agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "super mario") == 0)
	   	   	{
				cout << "As vezes você so errou como escrevia\n";
				break;
			}
			else
			{
				cout << "Vai parar de jogar quando?.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	
	cout << "\n";
	cout << "Inclusive as respostas desse primeiro level são:\n";
	cout << "Counter Strike.\n";
	cout << "Super mario.\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Começando... Level 2 - Fácil\n";
	cout << "\n";
	cout << "Primeira frase:\n";
	cout << "Nós trabalhamos nas sombras para servir a luz. Nós somos...\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "assassins creed") == 0)
		cout << "Que bom que você acertou.\n";
	else
	{
		cout << "Não te julgo, mas você merece ser julgado.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Tá, insira a inicial corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "assassins creed") == 0)
	   	   	{
				cout << "Por que eu te daria parabéns?\n";
				break;
			}
			else
			{
				cout << "Como você conseguiu essa proeza?.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	
	cout << "\n";
	cout << "Ok. Vamos para a segunda frase então\n";
	cout << "É perigoso ir sozinho, leve isso...\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "the legend of zelda") == 0)
		cout << "Magnífio, simplesmente uma obra prima\n";
	else
	{
		cout << "Era tão icônica, como??.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Tá, insira a inicial corretamente agora\n";
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
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "As respostas desse level são:\n";
	cout << "Assassins Creed\n";
	cout << "Zelda\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Iniciando... level 3 - Médio\n";
	cout << "Não se esqueça, você deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, vamos lá!\n";
	cout << "É um dia bonito lá fora. Os pássaros cantam, as flores florescem.\n"; 
	cout << "Em dias como estes, as crianças como você ... Deveriam queimar no inferno\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "undertale") == 0)
		cout << "Mais uma obra prima, parabéns.\n";
	else
	{
		cout << "Dica: um dos maiores jogos indies.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Vê se coloca o nome corretamente agora\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "undertale") == 0)
	   	   	{
				cout << "Tomara que antes tenha sido só um erro de digitação\n";
				break;
			}
			else
			{
				cout << "Tu não cansa de ser um fracasso não?\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a próxima frase:\n";
	cout << "Se você está atravessando o inferno, bem, continue andando.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "dark souls") == 0)
		cout << "To devendo de terminar esse jogo, parabéns.\n";
	else
	{
		cout << "Errar deveria ser humano.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
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
				cout << "Não é todo mundo que joga mesmo.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a próxima frase, ela é incrível\n";
	cout << "Não existe perdão. As pessoas não esquecem. Nada é perdoado.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "red dead redemption") == 0)
		cout << "Que bom que tu acertou\n";
	else
	{
		cout << "Como tu errou a do jogo do século?.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Tá, insira a inicial corretamente agora\n";
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
				cout << "Vai querer tentar de novo? (sim ou não)\n";
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
	
	cout << "Começando... level 4 - Díficil!\n";
	cout << "Não se esqueça, você deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, boa sorte.\n";
	cout << "Um rei eleito pelo povo não é um governante, mas um devedor.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "the witcher") == 0)
		cout << "Acertou um que deveria ser difícil, aí sim\n";
	else
	{
		cout << "Queria só ver o que que você chutou pra errar isso\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Acerta aí, o jogo é tão bom\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "the witcher") == 0)
	   	   	{
				cout << "Deve só ter escrito errado, só vamo\n";
				break;
			}
			else
			{
				cout << "Fazer o que, level 4 né\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a próxima frase, acho que ela é mais difícil\n";
	cout << "Todos nós fazemos escolhas na vida, mas no final nossas escolhas nos fazem.\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "bioshock") == 0)
		cout << "Essa eu não acertava, parabéns\n";
	else
	{
		cout << "Eu também erraria.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
		cin.getline(tentativa, 5);
	
		while (strcmp(tentativa, "sim") == 0)
		{
			cout << "" << endl;
			cout << "Boa sorte aí\n";
			cin.getline(nome, 20);
			
			if (strcmp(nome, "bioshock") == 0)
	   	   	{
				cout << "Belíssimo\n";
				break;
			}
			else
			{
				cout << "Tá parecendo eu.\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "Vamos para a última frase, ela nem é tão difícil assim\n";
	cout << "O que é um homem… além de uma miserável pilha de segredos!\n";
	
	//inserindo o nome do jogo
	cin.getline(nome, 20);
	
	//conferindo a resposta + loop para caso o nome esteja errado
	if (strcmp(nome, "castlevania") == 0)
		cout << "Um clássico, não é?\n";
	else
	{
		cout << "Eu não acertaria também, nunca joguei.\n";
		cout <<  "" << endl;
		cout << "Vai querer tentar de novo? (sim ou não)\n";
		
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
				cout << "O último e você errando ainda\n";
				cout << "" << endl;
				cout << "Vai querer tentar de novo? (sim ou não)\n";
				cin.getline(tentativa, 5);
			}
		}
	}
	
	cout << "\n";
	cout << "As respostas do último level eram:\n";
	cout << "The Witcher\n";
	cout << "Bioshok\n";
	cout << "Castlevania\n";
	
	return 0;
}