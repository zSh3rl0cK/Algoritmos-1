#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char nome[20];
	int nota;
	
	cin >> nota; 
	cin.ignore(); //ignora a entrada do enter apos a nota
	cin.getline(nome, 20);
	
	cout << "Salve " << nome << endl;
	cout << "Sua nota foi: " << nota << endl;
	
	return 0;
}