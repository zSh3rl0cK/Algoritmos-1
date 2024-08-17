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
			cout << "Você terá uma semana bem sossegada, eu acho\n"; 
			break;
		case 'V':
			cout << "Você terá uma semana extremamente caótica, boa sorte!\n";
			break;
		case 'C':
			cout << "Você terá sorte no amor, ou seria muito azar?\n";
			break;
		case 'G':
			cout << "Você terá uma semana de muitos ganhos, qual? Descubra.\n";
			break;
		default:
			cout << "Essa cor não está na minha lista lê direito.\n";
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
				cout << "Você vai tomar decisões boas essa semana, ou não.\n";
				break;
			case 'B':
				cout << "Uma onda de melancolia e desespero se apróxima!\n";
				break;
			case 'I':
				cout << "Relaxe, alguém vai te chamar para ir à praia\n";
				break;
			case 'R':
				cout << "Espíritos malignos tentarão se vingar de você, cuidado!\n";
				break;
			default:
				cout << "Escolhe uma das 4 cores que falei doido\n";
		}
	}
	
	
	
	return 0;
}