#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
	
	char p1[50];
	char p2[50];
	char p3[50];
	char aux[50];
	
	setlocale(LC_ALL, "");
	
	cin.getline(p1, 50);
	cin.getline(p2, 50);
	cin.getline(p3, 50);
	
	
	if(strcmp(p1, p2) > 0)
	{
		strcpy(aux, p1);
		strcpy(p1, p2);
		strcpy(p2, aux);	
	}
	
	if(strcmp(p2, p3) > 0)
	{
		strcpy(aux, p2);
		strcpy(p2, p3);
		strcpy(p3, aux);
	}
	if(strcmp(p1, p2) > 0)
	{
		strcpy(aux, p1);
		strcpy(p1, p2);
		strcpy(p2, aux);	
	}
	
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	return 0;	
}
