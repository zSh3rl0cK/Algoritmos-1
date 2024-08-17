#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	
	char nome;
	char tentativa;
	
	
	setlocale(LC_ALL, "");
	cout << "Teste seus conhecimentos sobre jogos!\n";
	cout << "Este � o jogo das inciais!\n";
	cout << "\n";
	cout << "A cada level, voc� dever� acertar o nome de um jogo por uma frase caracter�stica dele\n";
	cout << "N�o se esque�a, voc� deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Come�ando... Level 1 - Muito F�cil\n";
	cout << "\n";
	cout << "Primeira frase do jogo!\n";
	cout << "The bomb has been planted.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'c':
		cout << "Nem vou te dar parab�ns, essa todos sabem\n";
		break;
	default:
		cout << "Como voc� n�o sabe? Isso era para ser imposs�vel de errar.\n";
		cout << "Vai querer tentar de novo? (s ou n)\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "T�, insira a inicial corretamente agora\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'r':
				cout << "Sempre soube, todos jogaram CS alguma vez\n";
				break;
			default:
				cout << "Voc� n�o deveria mais jogar esse jogo.\n";
				break;
			}
			
			break;
		default:
			cout << "Simplesmente por que??\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";	
	cout << "Vamos para a pr�xima frase. A mais conhecida de todas, apenas.\n";
	cout << "Desculpe, estou em outro castelo.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'm':
		cout << "Ok, acertou a mais famosa!\n";
		break;
	default:
		cout << "N�o consigo acreditar que voc� errou\n";
		cout << "Vai tentar de novo, n�? COLOCA LOGO UM S\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Livre e espont�nea press�o. Insira a incial correta agora.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'm':
				cout << "N�o era nem pra ter errado a tentativa anterior!\n";
				break;
			default:
				cout << "Sinceramente, destrua seu computador.\n";
				break;
			}
			
			break;
		default:
			cout << "POR QUE VOC� N�O VAI TENTAR? T� vamos logo pro level 2\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "Inclusive as respostas desse primeiro level s�o:\n";
	cout << "Counter Strike ou s� CS (C)\n";
	cout << "Mario. Sim, apenas Mario (M)\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Come�ando... Level 2 - F�cil\n";
	cout << "\n";
	cout << "Primeira frase:\n";
	cout << "N�s trabalhamos nas sombras para servir a luz. N�s somos...\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'a':
		cout << "Parab�ns, voc� acertou o jogo! Pena que voc� est� no n�vel f�cil.\n";
		break;
	
	default:
		cout << "Voc� n�o sabe nem o mais f�cil. Meu deus!\n";
		cout << "Quer tentar de novo?\n";
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Ok. Insira a inicial agora\n";
			cin >> nome;
			switch(tolower(nome))
			{
			case 'a':
				cout << "�timo, agora est� certo.\n";
				break;
			default:
				cout << "Como voc� conseguiu errar at� com uma segunda chance??\n";
				break;
			}
			break;
		default:
			cout << "Ok, pr�ximo ent�o...\n";
			break;
		}
		break;
	}

	
	cout << "\n";
	cout << "Ok. Vamos para a segunda frase ent�o\n";
	cout << "� perigoso ir sozinho, leve isso...\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'z':
		cout << "Perfeito, voc� acertou!\n";
		break;
	default:
		cout << "Como voc� errou uma t�o ic�nica?!\n";
		cout << "\n";
		cout << "Quer tentar de novo?\n";
		
		cin >> tentativa;
		
		switch(tolower(tentativa))
		{
		case 's':
			
			cout << "�timo, insira a inicial agora.\n";
			cin >> nome;
			cout << "\n";
			switch(tolower(nome))
			{
			case 'z':
				cout << "Agora t� certo, mas n�o vou te dar parab�ns n�o.\n";
				break;
			default:
				cout << "Voc� errou com uma SEGUNDA CHANCE, COMO??\n";
				break;
			}
			break;
		default:
			cout << "T�, pr�ximo ent�o...\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "As respostas desse level s�o:\n";
	cout << "Assassins Creed (A)\n";
	cout << "Zelda (Z)\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Iniciando... level 3 - M�dio\n";
	cout << "N�o se esque�a, voc� deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, vamos l�!\n";
	cout << "� um dia bonito l� fora. Os p�ssaros cantam, as flores florescem. Em dias como estes, as crian�as como voc� ... Deveriam queimar no inferno\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'u':
		cout << "Como n�o acertar tamb�m n�? Essa obra prima.\n";
		break;
	default:
		cout << "Voc� errou!! Mesmo com essa frase t�o caracter�stica...\n";
		cout << "Quer tentar de novo?\n";
		cin >> tentativa;
		cout << "\n";
		switch(tolower(tentativa))
		{
		case 's':
			cout << "�timo, insira corretamente agora pfv.\n";
			cin >> nome;
			switch(tolower(nome))
			{
			case 'u':
				cout << "A�, agora t� certo. N�o h� parab�ns para voc�.\n";
				break;
			default:
				cout << "Voc� errou... que decep��o.\n";
				break;
			}
			break;
		default:
			cout << "Sem gra�a, pr�ximo ent�o.\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase:\n";
	cout << "Se voc� est� atravessando o inferno, bem, continue andando.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'd':
		cout << "Ah, parab�ns! Acertou a minha favorita!\n";
		break;
	default:
		cout << "Estou decepcionado, era uma das minhas favoritas...\n";
		cout << "Quer tentar de novo? Acerte pfv\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "� isso a�! Acerte agora.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'd':
				cout << "Ah! Muito obrigado, est� certo!\n";
				break;
			default:
				cout << "Eu vou desistir de voc�, s�rio.\n";
				break;
			}
			
			break;
		default:
			cout << "Para de ser um sem gra�a!\n";
			break;
		}
		
		break;
	}
	
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase, ela � incr�vel\n";
	cout << "N�o existe perd�o. As pessoas n�o esquecem. Nada � perdoado.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'r':
		cout << "Meus parab�ns, acertou a do melhor jogo j� feito!\n";
		break;
	default:
		cout << "Como voc� n�o sabe?\n";
		cout << "Vai tentar de novo?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Voc� sabe e escreveu errado n�? Tenta a�.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'r':
				cout << "Sempre soube, est� certo!\n";
				break;
			default:
				cout << "Voc� deveria fechar o programa por errar essa.\n";
				break;
			}
			
			break;
		default:
			cout << "N�o consigo acreditar que voc� nem vai tentar\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "As respostas do level eram:\n";
	cout << "Undertale (U)\n";
	cout << "Dark Souls (D)\n";
	cout << "Red Dead Redemption (R)\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Come�ando... level 4 - D�ficil!\n";
	cout << "N�o se esque�a, voc� deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, boa sorte.\n";
	cout << "Um rei eleito pelo povo n�o � um governante, mas um devedor.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 't':
		cout << "Voc� acertou uma dif�cil, parab�ns. Voc� tem 1/3 do meu respeito\n";
		break;
	default:
		cout << "�, era de se esperar.\n";
		cout << "Quer tentar de novo? Voc� est� no dif�cil agora, lembre-se.\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Boa sorte! Insira novamente a incial\n";
			cin >> nome;
			switch(tolower(nome))
			{
			case 't':
				cout << "Caramba! Uma reden��o aqui.\n";
				break;
			default:
				cout << "Level dif�cil n�o � para todos mesmo...\n";
				break;
			}
			
			break;
		default:
			cout << "Bom, estamos no dif�cil, n�o espero que muitos consigam acertar...\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a pr�xima frase, acho que ela � mais dif�cil\n";
	cout << "Todos n�s fazemos escolhas na vida, mas no final nossas escolhas nos fazem.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'b':
		cout << "Impressionante, nem eu lembrava dela.\n";
		break;
	default:
		cout << "Eu te entendo, mas s� nesse caso\n";
		cout << "Vai tentar de novo?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Vai l�, boa sorte com ela.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'b':
				cout << "Nessa voc� me superou\n";
				break;
			default:
				cout << "Fazer o que, continua a�.\n";
				break;
			}
			
			break;
		default:
			cout << "N�o quis nem chutar uma letra?\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a �ltima frase, ela nem � t�o dif�cil assim\n";
	cout << "O que � um homem� al�m de uma miser�vel pilha de segredos!\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'c':
		cout << "Terminando com um acerto, uau!\n";
		break;
	default:
		cout << "N�o da pra lembrar de tudo, n�?\n";
		cout << "Vai querer outra tentativa?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Boa sorte, esta � sua �ltima chance.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'c':
				cout << "Agora sim, terminando com um acerto.\n";
				break;
			default:
				cout << "Bom, acabou. N�o h� mais chances...\n";
				break;
			}
			
			break;
		default:
			cout << "N�o vai nem chutar a sua �ltima? Triste\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "As respostas do �ltimo level eram:\n";
	cout << "The Witcher (T)\n";
	cout << "Bioshok (B)\n";
	cout << "Castlevania (C)\n";
	
	return 0;
}