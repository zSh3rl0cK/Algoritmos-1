#include <iostream>
#include <cctype>
#include <locale.h>

using namespace std;

int main()
{
	
	int num;
	char cor;
	
	cout << "Escolha um numero qualquer\n";
	
	cin >> num;
	cout << "\n";
	
	setlocale(LC_ALL,"");
	if(num%2 != 0)
	{
		cout << "Insira a incial de uma das seguintes cores:\n";
		cout << "Azul-marinho\n";
		cout << "Verde floresta\n";
		cout << "Gingerline\n";
		cout << "Carmesim\n";
		cout << "\n";
		
		cin >> cor;
		
		
		switch(toupper(cor))
		{
		case 'A':
			cout << "Voc� ter� uma semana bem sossegada, eu acho\n"; 
			break;
		case 'V':
			cout << "Voc� ter� uma semana extremamente ca�tica, boa sorte!\n";
			break;
		case 'C':
			cout << "Voc� ter� sorte no amor, ou seria muito azar?\n";
			break;
		case 'G':
			cout << "Voc� ter� uma semana de muitos ganhos, qual? Descubra.\n";
			break;
		default:
			cout << "Essa cor n�o est� na minha lista l� direito.\n";
		}
	}
	else
	{
		cout << "Insira a inicial de uma das seguintes cores:" << endl;
		cout << "Preto\n";
		cout << "Bege\n";
		cout << "Incarnadine\n";
		cout << "Roxo\n";
		cout << "\n";
		
		cin >> cor;
		
		switch(toupper(cor))
		{
			case 'P':
				cout << "Voc� vai tomar decis�es boas essa semana, ou n�o.\n";
				break;
			case 'B':
				cout << "Uma onda de melancolia e desespero se apr�xima!\n";
				break;
			case 'I':
				cout << "Relaxe, algu�m vai te chamar para ir � praia\n";
				break;
			case 'R':
				cout << "Esp�ritos malignos tentar�o se vingar de voc�, cuidado!\n";
				break;
			default:
				cout << "Escolhe uma das 4 cores que falei doido\n";
		}
	}
	
	
	
	return 0;
}