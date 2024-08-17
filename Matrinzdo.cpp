#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];
	int nLinhaa = 2;
	int nColunas = 3;
	int l, c;
	
	mat[0][0] = 3; mat[0][2] = 8; mat[0][1] = 9;
	mat[1][0] = 24; mat[1][1] = 22; mat[1][2] = 33;
	
	// mostrando a primeira linha
	for(c = 0; c < nColunas; c++)
	{
		for(l = 0; l < nLinhaa; l++)
		{
			cout << mat[l][c] << " ";
		}
		cout << endl;
	}

	return 0;
}