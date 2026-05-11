#include <iostream>

using namespace std;

int main()
{
	int tablero[4][4]{
		{0,0,0,0,},
		{0,0,0,0,},
		{0,0,1,0,},
		{0,0,0,0,}
	};
	int fila, columna;
	bool minaEncontrada = false;

	for (int turno = 1; turno <= 5; turno++)
	{
		cout << "Truno " << turno << endl;

		cout << "Ingrese la fila (0-3): ";
		cin >> fila;

		cout << "Ingrese la columna (0-3): ";
		cin >> columna;

		if (tablero[fila][columna] == 1)
		{
			cout << "Mina encontrada. Perdiste." << endl;
			minaEncontrada = true;
			break;
		}
		else
		{
			cout << "No hay mina en esa posicion." << endl;
		}
	}

	if (minaEncontrada)
	{
		cout << "Ganaste el juego." << endl;
	}

	return 0;
}