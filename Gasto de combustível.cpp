#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
 
    int tempo;
    int velocidade;
    float km;
    float litros;
 
    cin >> tempo;
    cin >> velocidade;
    km = tempo*velocidade;
    litros = km/12;
    
    cout << fixed << setprecision(3);
    cout << litros << endl;
    
    return 0;
}