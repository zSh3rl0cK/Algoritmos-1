#include <iostream>

using namespace std;

int main() {
    
    int N;
    int a;
    int b;
    int c;
    int i;
    
    a = 0;
    b = 1;
    
    cin >> N;
    
    cout << a << " " << b << " ";

    for (i = 2; i < N; i++) 
	{
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}