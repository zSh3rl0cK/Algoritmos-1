#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float peso;
	float altura;
	float IMC;
	
	cout << "Calcule seu IMC " << endl;
	cout << "Insira o valor de seu peso e sua altura respectivamente" << endl;
	cout << "Ex: peso = 75.8 e altura = 1.75" << endl;
	
	cin >> peso;
	cin >> altura;
	IMC = peso/(altura*altura);
	
	cout << "peso = " << peso << endl;
	cout << "altura = " << altura << endl;
	cout << fixed << setprecision(2);
	cout << "IMC = " << IMC << endl;
	
	return 0;
}