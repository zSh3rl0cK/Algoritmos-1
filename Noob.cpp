#include <iostream>
#include <iomanip>

using namespace std;

struct info
{
	// informacoes 
	int mat; // matricula
	float nota1; // primeira nota
	float nota2; // segunda nota
	float media; // media ponderada
};

int main()
{
	
	info aluno; // informacoes do aluno 
	
	// lendo suas informacoes
	cin >> aluno.mat;
	cin >> aluno.nota1;
	cin >> aluno.nota2;
	
	// calculando a media ponderada
	aluno.media = (2*aluno.nota1 + 3*aluno.nota2)/5;
	
	// definindo as casas decimais
	cout << fixed << setprecision(2);
	
	// imrpimindo os dados
	cout << "Matricula do aluno: " << aluno.mat << endl;
	cout << "Nota da primeira prova: " << aluno.nota1 << endl;
	cout << "Nota da segunda prova: " << aluno.nota2 << endl;
	cout << "Media: " << aluno.media << endl;
	
	
	return 0;
}