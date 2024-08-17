#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char cidade[100]; //nome da cidade
	
	cin.getline(cidade,100);
	
	if(strcmp(cidade, "Brasilia") == 0)
		cout << "61" << endl;
	else if(strcmp(cidade, "Salvador") == 0)
		cout << "71" << endl;
	else if(strcmp(cidade, "Sao paulo") == 0)
		cout << "11" << endl;
	else if(strcmp(cidade, "Rio de Janeiro") == 0)
		cout << "21" << endl;	
	else if(strcmp(cidade, "Juiz de fora") == 0)
		cout << "32" << endl;
	else if(strcmp(cidade, "campinas") == 0)
		cout << "19" << endl;
	else if(strcmp(cidade, "Vitoria") == 0)
		cout << "27" << endl;
	else if(strcmp(cidade, "Belo Horizonte") == 0)
		cout << "31" << endl;
	else if(strcmp(cidade, "Santa Rita do Sapucai") == 0)
		cout << "35" << endl;
	else
		cout << "DDD nao cadastrado" << endl;
				
	return 0;
}