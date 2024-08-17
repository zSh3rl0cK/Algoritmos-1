#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char frase[100]; // Frase a ser inserida
	char *partes; // partes da frase
	
	// lendo a frase
	cin.getline(frase, 100);
	
	// quebrando a frase
	partes = strtok(frase, " ,.-");
	
	// imprimindo as partes quebradas da frase
	while(partes != NULL)
	{
		cout << partes << endl;
		partes = strtok (NULL, " ,.-");
	}
	
	return 0;	
}
