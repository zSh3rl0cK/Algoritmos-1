#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float p1;
	float p2;
	float media;
	int ref;

cout << fixed << setprecision(2);

do{
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

cout << "novo calculo (1-sim 2-nao)\n";

do{
	cin >> ref;
	
	if(ref != 1 && ref != 2)
		cout << "novo calculo (1-sim 2-nao)\n";
}while(ref != 1 && ref != 2);

}while(ref == 1);


return 0;
}