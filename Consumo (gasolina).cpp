#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   int X;
   float Y;
   float consumo;
   
   cin >> X;
   cout << fixed << setprecision(1);
   cin >> Y;
   consumo = X/Y;
   
   cout << fixed << setprecision(3);
   cout << consumo << " km/l" << endl;
    
    return 0;
}