#include <iostream>

using namespace std;

int main()
{
    string nombres[10];

    for (int i = 0; i < 10; i++) 
    {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }
    cout << "Nombres en orden ingresado" << endl;

    for (int i = 0; i < 10; i++) 
    {
        cout << nombres[i] << endl;
    }
    cout << "Nombres de manera inversa" << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << nombres[i] << endl;
    }

    return 0;
}