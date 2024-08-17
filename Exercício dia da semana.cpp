#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

void pegar_dia(int d, int m, int a, int &ds)
{
	int g , f;
	float intp , fracp , intpa , fracpa , frac , in , n , delta;
	
	if(m <= 2)
	{
		g = a - 1;
		f = m + 13;
	}
	else
	{
		g = a;
		f = m + 1;
	}
	
	fracp = modf((365.25*g), &intp);
	fracpa = modf((30.6*f), &intpa);
	n = intp + intpa - 621049 + d;
	
	if(n < 36523)
	{
		delta = 2;
	}
	else if(n >= 36523 && n < 73048)
	{
		delta = 1;
	}
	else if(n >= 73048)
	{
		delta = 0;
	}
	
	frac = modf((n/7), &in);
	ds = round((frac)*7) + delta + 1;
}

int main()
{
	
	int d , m , a , ds , g , f;
	float intp , fracp , intpa , fracpa , frac , in , n , delta;
	
	int ofc;
	
	cin >> d;
	cin >> m;
	cin >> a;
	
	pegar_dia(d, m, a, ds);
	
	setlocale(LC_ALL,"");
	
	switch(ds)
	{
	case 1:
		cout << "Domingo" << endl;
		break;
	case 2:
		cout << "Segunda-feira" << endl;
		break;
	case 3:
		cout << "Terça-feira" << endl;
		break;
	case 4:
		cout << "Quarta-feira" << endl;
		break;
	case 5:
		cout << "Quinta-feira" << endl;
		break;
	case 6: 
		cout << "Sexta-feira" << endl;
		break;
	case 7:
		cout << "Sábado" << endl;
		break;
	default:
		cout << "Esse dia não existe doido" << endl;
		break;
	}
	
	return 0;
}