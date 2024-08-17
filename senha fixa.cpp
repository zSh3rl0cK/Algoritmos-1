#include <iostream>

using namespace std;

int main()
{
	
	int senha;
	
	while(senha != 2002)
	{
		cin >> senha;
		
		if(senha == 2002)
		{
			cout << "Acesso permitido\n";
		}
		else
		{
			cout << "Acesso negado\n";
		}
	}
		
	return 0;
}
