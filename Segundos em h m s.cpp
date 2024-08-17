#include <iostream>
 
using namespace std;
 
int main() {
 
    int segundos;
    int minutos;
    int horas;
    
    cin >> segundos;
    minutos = (segundos/60);
    horas = (minutos/60);
    
    cout << horas << ":" << minutos-(horas*60) << ":" << segundos-(minutos*60) << endl;
    
    return 0;
}