#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
	float n;
	srand (time(NULL));
	n = rand()%63;
	cout << n << endl;
	
	return 0;
}