#include <iostream>

using namespace std;

int main()
{
    int numero[10];
    int impares = 0;
    int pares = 0;

    for (int i = 0; i < 10; i++) 
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero[i];
    }
    for (int i = 0; i < 10; i++) 
    {
        if (numero[i] % 2 == 0) 
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}
