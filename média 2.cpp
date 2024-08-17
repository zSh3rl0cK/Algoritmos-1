#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A;
    double B;
    double C;
    double MEDIA;
    
    cout << fixed << setprecision(1);
    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A*2+B*3+C*5)/10;
    
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;
    
    return 0;
}