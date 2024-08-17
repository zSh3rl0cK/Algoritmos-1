#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
	int idade;
	char letra;
	
	cin >> idade;
	cin >> letra;
	
	if (idade < 10 && letra == 'v' || letra == 'V') //pode-se utilizar ";"
	cout << "Bem vindo ao clube dos V's" << endl;  

	else //o comando a seguir pode ser escrito entre as chaves da função else
		cout << "Voce nao e bem vindo" << endl;
	//se for utilizado mais de um comando em else (2couts) deve-se usar as chaves

	return 0;
}


