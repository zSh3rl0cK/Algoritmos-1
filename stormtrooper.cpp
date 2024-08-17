#include <iostream>
#include <iomanip>

using namespace std;

struct info
{
	int ID;
	int IM;
	float FA;
	float GA;
};

int main()
{
	int i; // contador
	int N; // numero de stormtroopers
	int aux2;
	int aux;
	
	info stormtrooper[100];
	
	i = 0;
	N = 0;
	aux = 0;
	
	do
	{
		cin >> stormtrooper[i].ID;
		cin >> stormtrooper[i].IM;
		cin >> stormtrooper[i].FA;
		
		aux2 = stormtrooper[i].ID;
		
		stormtrooper[i].GA = (stormtrooper[i].IM + stormtrooper[i].FA)/2;
		
		if(stormtrooper[i].GA > aux)
			aux = stormtrooper[i].GA;
		
		i++;
		N++;
	}
	while(aux2 != 0);
	
	for(i = 0; i < N; i++)
	{
		if(aux == stormtrooper[i].ID)
		{
			cout << "Stormtrooper escolhido: " << stormtrooper[i].GA << endl;
			cout << "GA: " << stormtrooper[i].GA << endl;;
		}
	}
	
	return 0;
}