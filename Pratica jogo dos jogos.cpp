#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	
	char nome;
	char tentativa;
	
	
	setlocale(LC_ALL, "");
	cout << "Teste seus conhecimentos sobre jogos!\n";
	cout << "Este é o jogo das inciais!\n";
	cout << "\n";
	cout << "A cada level, você deverá acertar o nome de um jogo por uma frase característica dele\n";
	cout << "Não se esqueça, você deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Começando... Level 1 - Muito Fácil\n";
	cout << "\n";
	cout << "Primeira frase do jogo!\n";
	cout << "The bomb has been planted.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'c':
		cout << "Nem vou te dar parabéns, essa todos sabem\n";
		break;
	default:
		cout << "Como você não sabe? Isso era para ser impossível de errar.\n";
		cout << "Vai querer tentar de novo? (s ou n)\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Tá, insira a inicial corretamente agora\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'r':
				cout << "Sempre soube, todos jogaram CS alguma vez\n";
				break;
			default:
				cout << "Você não deveria mais jogar esse jogo.\n";
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
	cout << "Vamos para a próxima frase. A mais conhecida de todas, apenas.\n";
	cout << "Desculpe, estou em outro castelo.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'm':
		cout << "Ok, acertou a mais famosa!\n";
		break;
	default:
		cout << "Não consigo acreditar que você errou\n";
		cout << "Vai tentar de novo, né? COLOCA LOGO UM S\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Livre e espontânea pressão. Insira a incial correta agora.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'm':
				cout << "Não era nem pra ter errado a tentativa anterior!\n";
				break;
			default:
				cout << "Sinceramente, destrua seu computador.\n";
				break;
			}
			
			break;
		default:
			cout << "POR QUE VOCÊ NÃO VAI TENTAR? Tá vamos logo pro level 2\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "Inclusive as respostas desse primeiro level são:\n";
	cout << "Counter Strike ou só CS (C)\n";
	cout << "Mario. Sim, apenas Mario (M)\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Começando... Level 2 - Fácil\n";
	cout << "\n";
	cout << "Primeira frase:\n";
	cout << "Nós trabalhamos nas sombras para servir a luz. Nós somos...\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'a':
		cout << "Parabéns, você acertou o jogo! Pena que você está no nível fácil.\n";
		break;
	
	default:
		cout << "Você não sabe nem o mais fácil. Meu deus!\n";
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
				cout << "Ótimo, agora está certo.\n";
				break;
			default:
				cout << "Como você conseguiu errar até com uma segunda chance??\n";
				break;
			}
			break;
		default:
			cout << "Ok, próximo então...\n";
			break;
		}
		break;
	}

	
	cout << "\n";
	cout << "Ok. Vamos para a segunda frase então\n";
	cout << "É perigoso ir sozinho, leve isso...\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'z':
		cout << "Perfeito, você acertou!\n";
		break;
	default:
		cout << "Como você errou uma tão icônica?!\n";
		cout << "\n";
		cout << "Quer tentar de novo?\n";
		
		cin >> tentativa;
		
		switch(tolower(tentativa))
		{
		case 's':
			
			cout << "Ótimo, insira a inicial agora.\n";
			cin >> nome;
			cout << "\n";
			switch(tolower(nome))
			{
			case 'z':
				cout << "Agora tá certo, mas não vou te dar parabéns não.\n";
				break;
			default:
				cout << "Você errou com uma SEGUNDA CHANCE, COMO??\n";
				break;
			}
			break;
		default:
			cout << "Tá, próximo então...\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "As respostas desse level são:\n";
	cout << "Assassins Creed (A)\n";
	cout << "Zelda (Z)\n";
	
	cout << "\n";
	cout << "=======================================================================================================================\n";
	cout << "\n";
	
	cout << "Iniciando... level 3 - Médio\n";
	cout << "Não se esqueça, você deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, vamos lá!\n";
	cout << "É um dia bonito lá fora. Os pássaros cantam, as flores florescem. Em dias como estes, as crianças como você ... Deveriam queimar no inferno\n";
	
	cin >> nome;
	
	switch(tolower(nome))
	{
	case 'u':
		cout << "Como não acertar também né? Essa obra prima.\n";
		break;
	default:
		cout << "Você errou!! Mesmo com essa frase tão característica...\n";
		cout << "Quer tentar de novo?\n";
		cin >> tentativa;
		cout << "\n";
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Ótimo, insira corretamente agora pfv.\n";
			cin >> nome;
			switch(tolower(nome))
			{
			case 'u':
				cout << "Aê, agora tá certo. Não há parabéns para você.\n";
				break;
			default:
				cout << "Você errou... que decepção.\n";
				break;
			}
			break;
		default:
			cout << "Sem graça, próximo então.\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a próxima frase:\n";
	cout << "Se você está atravessando o inferno, bem, continue andando.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'd':
		cout << "Ah, parabéns! Acertou a minha favorita!\n";
		break;
	default:
		cout << "Estou decepcionado, era uma das minhas favoritas...\n";
		cout << "Quer tentar de novo? Acerte pfv\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "É isso aí! Acerte agora.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'd':
				cout << "Ah! Muito obrigado, está certo!\n";
				break;
			default:
				cout << "Eu vou desistir de você, sério.\n";
				break;
			}
			
			break;
		default:
			cout << "Para de ser um sem graça!\n";
			break;
		}
		
		break;
	}
	
	
	cout << "\n";
	cout << "Vamos para a próxima frase, ela é incrível\n";
	cout << "Não existe perdão. As pessoas não esquecem. Nada é perdoado.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'r':
		cout << "Meus parabéns, acertou a do melhor jogo já feito!\n";
		break;
	default:
		cout << "Como você não sabe?\n";
		cout << "Vai tentar de novo?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Você sabe e escreveu errado né? Tenta aí.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'r':
				cout << "Sempre soube, está certo!\n";
				break;
			default:
				cout << "Você deveria fechar o programa por errar essa.\n";
				break;
			}
			
			break;
		default:
			cout << "Não consigo acreditar que você nem vai tentar\n";
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
	
	cout << "Começando... level 4 - Díficil!\n";
	cout << "Não se esqueça, você deve inserir a inicial do primeiro nome do jogo\n";
	cout << "\n";
	
	cout << "Primeira frase, boa sorte.\n";
	cout << "Um rei eleito pelo povo não é um governante, mas um devedor.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 't':
		cout << "Você acertou uma difícil, parabéns. Você tem 1/3 do meu respeito\n";
		break;
	default:
		cout << "É, era de se esperar.\n";
		cout << "Quer tentar de novo? Você está no difícil agora, lembre-se.\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Boa sorte! Insira novamente a incial\n";
			cin >> nome;
			switch(tolower(nome))
			{
			case 't':
				cout << "Caramba! Uma redenção aqui.\n";
				break;
			default:
				cout << "Level difícil não é para todos mesmo...\n";
				break;
			}
			
			break;
		default:
			cout << "Bom, estamos no difícil, não espero que muitos consigam acertar...\n";
			break;
		}
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a próxima frase, acho que ela é mais difícil\n";
	cout << "Todos nós fazemos escolhas na vida, mas no final nossas escolhas nos fazem.\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'b':
		cout << "Impressionante, nem eu lembrava dela.\n";
		break;
	default:
		cout << "Eu te entendo, mas só nesse caso\n";
		cout << "Vai tentar de novo?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Vai lá, boa sorte com ela.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'b':
				cout << "Nessa você me superou\n";
				break;
			default:
				cout << "Fazer o que, continua aí.\n";
				break;
			}
			
			break;
		default:
			cout << "Não quis nem chutar uma letra?\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "Vamos para a última frase, ela nem é tão difícil assim\n";
	cout << "O que é um homem… além de uma miserável pilha de segredos!\n";
	
	cin >> nome;
	switch(tolower(nome))
	{
	case 'c':
		cout << "Terminando com um acerto, uau!\n";
		break;
	default:
		cout << "Não da pra lembrar de tudo, né?\n";
		cout << "Vai querer outra tentativa?\n";
		
		cin >> tentativa;
		switch(tolower(tentativa))
		{
		case 's':
			cout << "Boa sorte, esta é sua última chance.\n";
			
			cin >> nome;
			switch(tolower(nome))
			{
			case 'c':
				cout << "Agora sim, terminando com um acerto.\n";
				break;
			default:
				cout << "Bom, acabou. Não há mais chances...\n";
				break;
			}
			
			break;
		default:
			cout << "Não vai nem chutar a sua última? Triste\n";
			break;
		}
		
		break;
	}
	
	cout << "\n";
	cout << "As respostas do último level eram:\n";
	cout << "The Witcher (T)\n";
	cout << "Bioshok (B)\n";
	cout << "Castlevania (C)\n";
	
	return 0;
}