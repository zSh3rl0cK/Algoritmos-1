#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int s;
	
	cin >> x;
	cin >> y;
	s = (x*y)/y;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "s = " << s << endl;
	
	return 0;
}