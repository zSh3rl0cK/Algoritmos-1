#include <iostream>
 
using namespace std;
 
int main() {
 
    int dia;
    int anos;
    int meses;
    int dias;
    
    cin >> dia;
    anos = dia/365;
    meses = (dia%365)/30;
    dias = (dia%365)%30;
    
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    
    return 0;
}