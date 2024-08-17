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
		cout << "ordem alfabética" << endl;
	else if(r > 0)
		cout << "ordem não alfabética mi bro" << endl;
	else
		cout << "Uai são iguais" << endl;
				
	return 0;
}