#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char palavra1[20];
	char palavra2[20];
	int r;
	
	setlocale(LC_ALL, "");
	
	cin.getline(palavra1, 20);
	cin.getline(palavra2, 20);
	
	
	r = strcmp(palavra1, palavra2);
	
	if(r < 0)
		cout << "ordem alfab�tica" << endl;
	else if(r > 0)
		cout << "ordem n�o alfab�tica mi bro" << endl;
	else
		cout << "Uai s�o iguais" << endl;
				
	return 0;
}