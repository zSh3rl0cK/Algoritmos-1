#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	
	char nota;
	cin >> nota;
	
	switch(toupper(nota)) // pode se usar (toupper(nota)) - biblioteca cctype
	{
	case 'A':
		cout << "Excelente!\n";
		break;
	
	case 'B':
		cout << "Bom.\n";
		break;
	
	case 'C':
		cout << "Regular.\n";
		break;
	
	default:
		cout << "Estude mais!\n";
	}
	
	return 0;
}