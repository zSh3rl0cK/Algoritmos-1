#include <iostream>

using namespace std;

int main()
{
	
	int codigo;
	int quantidade;
	
	cin >> codigo >> quantidade;
	
	
	switch(codigo)
	{
	case 1:
		cout << "Total: R$ " << 4.00*quantidade << endl;
		break;
	
	case 2:
		cout << "Total: R$ " << 4.50*quantidade << endl;
		break;
	
	case 3:
		cout << "Total: R$ " << 5.00*quantidade << endl;
		break;
	
	case 4:
		cout << "Total: R$ " << 2.00*quantidade << endl;
		break;
	
	case 5:
		cout << "Total: R$ " << 1.50*quantidade << endl;
		break;
	
	default:
		cout << "Codigo nao existente" << endl;
	}
	
	return 0;
}