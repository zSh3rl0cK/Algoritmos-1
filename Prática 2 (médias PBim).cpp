#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float P11 , P21 , PGB1 , PGA1;
	float P12 , P22 , PGB2 , PGA2;
	float P13 , P23 , PGB3 , PGA3;
	float P14 , P24 , PGB4 , PGA4;
	float peso1 , peso2 , peso3 , peso4;
	float MediaP1 , MediaP2 , MediaP3 , MediaP4 , MediaPF;
	
	cout << "Segue o valor de cada prova:" << endl;
	cout << "Prova 1 - 6" << endl;
	cout << "Prova 2 - 6" << endl;
	cout << "Prova Geral Basica - 5" << endl;
	cout << "Prova Geral Avançada - 8" << endl;
	cout << "" << endl;
	
	cout << "Insira os resultados das provas do 1Bim" << endl;
		
	cin >> P11;
	cin >> P21;
	cin >> PGB1;
	cin >> PGA1;
	
	cout << "" << endl;
	cout << "Agora, insira o peso equivalente do semestre" << endl;
	cin >> peso1;
	
	MediaP1 = (P11*peso1+P21*peso1+PGB1*peso1+PGA1*peso1)/peso1;
	
	cout << fixed << setprecision(2);
	cout << "MediaP1 = " << MediaP1 << endl;
	
	cout << "" << endl;
	cout << "Insira os resultados das provas do 2Bim" << endl;
	
    cin >> P12;
	cin >> P22;
	cin >> PGB2;
	cin >> PGA2;
	
	cout << "" << endl;
	cout << "Agora, insira o peso equivalente do semestre" << endl;
	cin >> peso2;
	
	MediaP2 = (P12*peso2+P22*peso2+PGB2*peso2+PGA2*peso2)/peso2;
	
	cout << fixed << setprecision(2);
	cout << "MediaP2 = " << MediaP2 << endl;
	
    cout << "" << endl;
	cout << "Insira os resultados das provas do 3Bim" << endl;
	
    cin >> P13;
	cin >> P23;
	cin >> PGB3;
	cin >> PGA3;
	
	cout << "" << endl;
	cout << "Agora, insira o peso equivalente do semestre" << endl;
	cin >> peso3;
	
	MediaP3 = (P13*peso3+P23*peso3+PGB3*peso3+PGA3*peso3)/peso3;
	
	cout << fixed << setprecision(2);
	cout << "MediaP3 = " << MediaP3 << endl;
	
    cout << "" << endl;
	cout << "Insira os resultados das provas do 4Bim" << endl;
	
    cin >> P14;
	cin >> P24;
	cin >> PGB4;
	cin >> PGA4;
	
	cout << "" << endl;
	cout << "Agora, insira o peso equivalente do semestre" << endl;
	cin >> peso4;
	
	MediaP4 = (P14*peso4+P24*peso4+PGB4*peso4+PGA4*peso4)/peso4;
	
	cout << fixed << setprecision(2);
	cout << "MediaP4 = " << MediaP4 << endl;
	
	cout << "" << endl;
	cout << "Nota final:" << endl;
	MediaPF = ((MediaP1*peso1+MediaP2*peso2+MediaP3*peso3+MediaP4*peso4)/(peso1+peso2+peso3+peso4))*4;
	
	cout << "MediaPF = " << MediaPF << endl;
	
	return 0;
}
