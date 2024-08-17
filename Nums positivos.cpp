#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int i;
	int p;
	float num;
	float soma;
	float media;
	
	p = 0;
	soma = 0;
	
	for(i = 0; i < 6; i++)
	{
		cin >> num;
		if(num > 0)
		{
			p = p + 1;
			soma = soma + num;
		}
	}
	
	media = soma/p;
	
	cout << fixed << setprecision(1);
	cout << p << " valores positivos" << endl;
	cout << media << endl;
	
	return 0;
}