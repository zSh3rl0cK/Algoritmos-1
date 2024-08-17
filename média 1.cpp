#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A;
    double B;
    double MEDIA;
    
    cout << fixed << setprecision(1);
    cin >> A;
    cin >> B;
    MEDIA = (A*3.5+B*7.5)/11;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}