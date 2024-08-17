#include <iostream>
#include <iomanip>
using namespace std;

 int main()
{
	
	float NP1AE;
	float NP2AE;
	float NP3AE;
	float NPAAE;
	
	float NP1AG;
	float NP2AG;
	float NP3AG;
	float NPAAG;
	
	float NP1CE;
	float NP2CE;
	float NP3CE;
	float NPACE;
	
	float NP1ME;
	float NP2ME;
	float NP3ME;
	float NPAME;
	float P1;
	float P2;
	float P3;
	float P4;
	
	float NP1Q;
	float NP2Q;
	float AT1;
	float AT2;
	float AT3;
	float AT4;
	float NPAQ;
	
	cout << "Calcule a sua media em cada disciplina no periodo" << endl;
	cout << "NP1AE(2) - NP1AG(2) - NP1CE(2) = 0 a 100 pts" << endl;
	cout << "NPAME = NP1ME = NP2ME = (P1+P2+P3+P4)/4" << endl;
	cout << "" << endl;
	
	cout << "Insira suas notas parciais de A.E." << endl;
	
	cin >> NP1AE;
	cin >> NP2AE;
	NPAAE = (NP1AE + NP2AE)/2;
	
	cout << "" << endl;
	
	cout << "Insira suas notas parciais de A.G." << endl;
	
	cin >> NP1AG;
	cin >> NP2AG;
	NPAAG = (NP1AG + NP2AG)/2;
	
	cout << "" << endl;
	
	cout << "Insira suas notas parciais de C.E." << endl;
	
	cin >> NP1CE;
	cin >> NP2CE;
	NPACE = (NP1CE+NP2CE)/2;
	
	cout << "" << endl;

	cout << "Insira suas notas de Q.(NP1 + AT1a4)" << endl;
	cin >> NP1Q;
	cin >> AT1;
	cin >> AT2;
	cin >> AT3;
	cin >> AT4;
	NP2Q = (AT1+AT2+AT3+AT4)/4;
	NPAQ = (NP1Q+NP2Q)/2;
	
	cout << "Insira suas notas de M.E. (p1 a p4)" << endl;
	
	cin >> P1;
	cin >> P2;
	cin >> P3;
	cin >> P4;
	NP1ME = (P1+P2+P3+P4)/4;
	NP2ME = (P1+P2+P3+P4)/4;
	NPAME = (NP1ME + NP2ME)/2;
	
	cout << "" << endl;
	
	cout << "NPAAE = " << NPAAE << endl;
	cout << "NPAAG = " << NPAAG << endl;
	cout << "NPACE = " << NPACE << endl;
	cout << "NPAQ = " << NPACE << endl;
	cout << "NPAME = " << NPAME << endl;
	
	return 0;
}