#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int grenal;
	int golsG;
	int golsI;
	int grenalN;
	int vitorG;
	int vitorI;
	int empates;
	
	
	vitorG = 0;
	vitorI = 0;
	empates = 0;
	grenalN = 1;
	
	do
	{
		cin >> golsI;
		cin >> golsG;
		
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin >> grenal;
		
		if(grenal == 1)
		{
			grenalN = grenalN + 1;
		}
		if(golsG > golsI)
		{
			vitorG = vitorG + 1;
		}
		else if(golsI > golsG)
		{
			vitorI = vitorI + 1;
		}
		else if(golsG == golsI)
		{
			empates = empates + 1;
		}

		
	}
	while(grenal == 1);

	cout << grenalN << " grenais" << endl;
	cout << "Inter:" << vitorI << endl;
	cout << "Gremio:" << vitorG << endl;
	cout << "Empates:" << empates << endl;
	
	if(vitorG > vitorI)
		cout << "Gremio venceu mais" << endl;
	else if(vitorG < vitorI)
	{
		cout << "Inter venceu mais" << endl;
	}
		
}