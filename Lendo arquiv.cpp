#include <iostream>
#include <cstring>

using namespace std;

float ideal(float h, char sexo)
{
    float P;
    
    if(strcmp(sexo, "M") == 0)
        P = (72.7 * h) - 58;
    else if(strcmp(sexo, "F") == 0)
        P = (62.1 * h) - 44.7;
    
    return P;
}

int main()
{
    float p;
    float PI;
    char sexo[5];
    
    cin >> p;
    cin.getline(sexo, 5);
    
    PI = ideal(p);
    
    cout << "Peso ideal: " << PI << endl;
    
    return 0;
}