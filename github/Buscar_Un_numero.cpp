#include <iostream>

using namespace std;

int main()
{
    int numero[20];
    int buscar;
    bool encontrar = true;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numero[i];
    }
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscar;

    for (int i = 0; i < 20; i++)
    {
        if (numero[i] == buscar)
        {
            encontrar = true;
        }
    }
    if (encontrar)
    {
        cout << "Numero encontradoo " << endl;
    }
    else
    {
        cout << "No se encontro " << endl;
    }
    return 0;
}
