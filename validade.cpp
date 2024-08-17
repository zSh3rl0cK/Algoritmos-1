#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
    float p1;
	float p2;
	float media;

setprecision(2);

do
{
cin >> p1;

if(p1 < 0 || p1 > 10)
cout << "nota invalida" << endl;
}
while(p1 < 0 || p1 > 10);

do
{
cin >> p2;

if(p2 < 0 || p2 > 10)
cout << "nota invalida" << endl;
}
while(p2< 0 || p2 > 10);

media = (p1 + p2)/2;

cout << "media = " << media << endl;


return 0;
}