#include <iostream>

using namespace std;

int main()
{
	int matriz[3][3];
	int sumaFila, sumaColumna;

	cout << "Ingrese los valores de la matriz: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << "Posicion [" << i + 1 << "][" << k << "]: ";
			cin >> matriz[i][k];
		}
	}
	cout << "Matriz y suma de filas" << endl;

	for (int i = 0; i < 3; i++)
	{
		sumaFila = 0;

		for (int k = 0; k < 3; k++) {
			cout << matriz[i][k] << ": ";
			sumaFila += matriz[i][k];
		}
		cout << "Suma de fila= " << sumaFila << endl;
	}
	cout << "Suma de columnas: " << endl;
	
	for (int k = 0; k < 3; k++)
	{
		sumaColumna = 0;

		for (int i = 0; i < 3; i++) {

			sumaColumna += matriz[i][k];
		}
		cout << "Suma de columnas: " << sumaColumna << " ";
	}
	return 0;
}