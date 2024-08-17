#include <iostream>

using namespace std;

int main()
{
	
	int i; //contador
	int N; //número a ser inserido
	
	cin >> N;
	
	for(i = 2; i <= N/2; i++)
	{
		if(N%i == 0)
			cout << "nao e primo\n";
		else
		{
			cout << "primo\n";
		}
	}
	
	return 0;
}