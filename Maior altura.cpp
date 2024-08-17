#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std; 

int main()
{
	
	int i; // contador
	int n; // numero de seres viventes
	float altura; // altura das pessoas em metros
	float maior; // variavel para ver a maior altura
	
	cin >> n;
	
	maior = 0;
	for(i = 0; i < n; i++)
	{
		cin >> altura;
		if(altura > maior)
		{
			maior = altura;
		}
	}
	
	setlocale(LC_ALL, "");
	cout << fixed << setprecision(2);
	cout << "O maior é: " << maior << endl;
	
	return 0;
}