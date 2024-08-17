#include <iostream>
 
using namespace std;
 
int main() {
 
    int dias;
    int meses;
    int anos;
    
    cin >> dias;
    meses = dias/30;
    anos = meses/12;
    
    cout << anos << " ano(s)" << endl;
    cout << meses-anos*12 << " mes(es)" << endl;
    cout << (dias-meses*30)-anos*5 << " dia(s)" << endl;
    
    return 0;
}