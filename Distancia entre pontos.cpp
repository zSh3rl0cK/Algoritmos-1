
#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float x1; float y1;
	float x2; float y2;
    float distancia;
    
    cin >> x1; cin >> y1;
    cin >> x2; cin >> y2;
    distancia = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
    
    cout << fixed << setprecision(4);
    cout << "" << distancia << endl;
 
    return 0;
}