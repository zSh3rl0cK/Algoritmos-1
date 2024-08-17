#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	

	char esqueleto[100]; //esqueleto presente ou nao
	char especie[100]; //especie do animal
	char dieta[100]; //dieta do animal
	
	cin.getline(esqueleto, 20);
	cin.getline(classe, 20);
	cin.getline(dieta, 20);
	
	//inserindo as palavras para especificar o animal
	if(strcmp(esqueleto, "vertebrado") == 0)
	{
		if(strcmp(classe, "ave") == 0)
		{
			if(strcmp(dieta, "carnivoro") == 0)
				cout << "aguia" << endl;
			else if(strcmp(dieta, "onivoro") == 0)
				cout << "pomba" << endl;
		}
		else if(strcmp(classe, "mamifero") == 0)
		{
			if(strcmp(dieta, "herbivoro") == 0)
				cout << "vaca" << endl;
			else if(strcmp(dieta, "onivoro") == 0)
				cout << "homem" << endl;
		}
	}
	
	else if(strcmp(esqueleto, "invertebrado") == 0)
	{
		if(strcmp(classe, "anelideo") == 0)
		{
			if(strcmp(dieta, "hematofago") == 0)
				cout << "sangeussuga" << endl;
			else if(strcmp(dieta, "onivoro") == 0)
				cout << "minhoca" << endl;
		}
		
		else if(strcmp(classe, "inseto") == 0)
		{
			if(strcmp(dieta, "hematofago") == 0)
				cout << "pulga" << endl;
			else if(strcmp(dieta, "herbivoro") == 0)
				cout << "lagarta" << endl;
		}
	}
	
	return 0;
}