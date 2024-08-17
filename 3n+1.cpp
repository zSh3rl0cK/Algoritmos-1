#include <iostream>

using namespace std;

int main()
{
	
	int N;
	
	cin >> N;
	
	
	do{
	if(N%2 == 0)
	{
		N = N/2;
		cout << " " << N; 
	}	
	else if(N%2 != 0)
	{
		N = 3*N+1;
		cout << " " << N;
	}
	}while(N != 1);
	
	return 0;
}