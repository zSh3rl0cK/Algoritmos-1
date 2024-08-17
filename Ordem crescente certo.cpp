#include <iostream>

using namespace std;

int main()
{
    int X;
    int Y;
    int Z;

    cin >> X >> Y >> Z;

    if (X > Y && X > Z && Y > Z) {
        cout << Z << endl;
        cout << Y << endl;
        cout << X << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    else if (X > Z && Y > Z && Y > X) {
        cout << Z << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    else if (X > Y && X > Z && Y < Z) {
        cout << Y << endl;
        cout << Z << endl;
        cout << X << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    else if (X > Y && X < Z && Y < Z) {
        cout << Y << endl;
        cout << X << endl;
        cout << Z << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    else if (Z > X && Y > X && Y > Z) {
        cout << X << endl;
        cout << Z << endl;
        cout << Y << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    else if (Z > X && Y > X && Y < Z) {
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
        cout << "" << endl;
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    return 0;
}