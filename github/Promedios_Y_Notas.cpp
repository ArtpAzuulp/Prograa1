#include <iostream>

using namespace std;

int main()
{
	float notas[5];
	float suma = 0, promedio;
	float mayor, menor;
	
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese la nota " << i + 1 << ": ";
		cin >> notas[i];
	}

	mayor = notas[0];
	menor = notas[0];

	cout << "Notas ingresadas" << endl;

	for (int i = 0; i < 5; i++) {

		cout << notas[i] << endl;

		suma += notas[i];

		if (notas[i] > mayor) 
		{
			mayor = notas[i];
		}
		if (notas[i] < menor)
		{
			menor = notas[i];
		}
	}
	promedio = suma / 5;

	cout << "Promedio: " << promedio << endl;
	cout << "Nota mayor: " << mayor << endl;
	cout << "Nota menor: " << menor << endl;

	return 0;
}
