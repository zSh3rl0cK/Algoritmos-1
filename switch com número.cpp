#include <iostream>

using namespace std;

int main()
{
	
	int nota;
	cin >> nota;
	
	switch(nota)
	{
	case 5:
		cout << "Excelente!\n";
		break;
	
	case 4:
		cout << "Bom.\n";
		break;
	
	case 3:
		cout << "Regular.\n";
		break;
	
	case 2:
		cout << "Ruim\n";
		break;
	
	default:
		cout << "Horroroso\n";
	}
	
	return 0;
}