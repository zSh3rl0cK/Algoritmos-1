#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
 
    double A;
    double B;
    double C;
    double TRIANGULO;
    double CIRCULO;
    double TRAPEZIO;
    double QUADRADO;
    double RETANGULO;
	
    cin >> A;
    cin >> B;
    cin >> C;
    TRIANGULO = (A*C)/2;
    CIRCULO = 3.14159*pow(C,2);
    TRAPEZIO = ((A+B)*C)/2;
    QUADRADO = pow(B,2);
    RETANGULO = A*B;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;
 
    return 0;
}