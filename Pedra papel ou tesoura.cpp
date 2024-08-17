#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	char maoA[100]; // simbolo do jogador A
	char maoB[100]; // simbolo do jogador B
	int N; // numero de jogos
	int i; // contador
	
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(maoA, 100);
		cin.getline(maoB, 100);
		
		if((strcmp(maoA, "pedra") == 0) && (strcmp(maoB, "tesoura") == 0))
			cout << "Jogador A" << endl;
		else if((strcmp(maoA, "pedra") == 0) && (strcmp(maoB, "papel") == 0))
			cout << "Jogador B" << endl;
		else if((strcmp(maoA, "tesoura") == 0) && (strcmp(maoB, "pedra") == 0))
			cout << "Jogador B" << endl;
		else if((strcmp(maoA, "tesoura") == 0) && (strcmp(maoB, "papel") == 0))
			cout << "Jogador A" << endl;
		else if((strcmp(maoA, "papel") == 0) && (strcmp(maoB, "pedra") == 0))
			cout << "Jogador A" << endl;
		else if((strcmp(maoA, "papel") == 0) && (strcmp(maoB, "tesoura") == 0))
			cout << "Jogador B" << endl;
		else
		{
			cout << "Empate" << endl;
		}
	}
	
	return 0;
}