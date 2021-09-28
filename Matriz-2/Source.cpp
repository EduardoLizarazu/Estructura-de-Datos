#include "matriz.h"
#include "stdlib.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m;

	do {

		cout << "numero de filas: ";
		cin >> n;
	} while ((n > 10) || (n <= 0));


	do {
		cout << "numero de columnas: ";
		cin >> m;
	} while ((m > 10) || (m <= 0));

	cout << "Matriz 1" << endl;
	matriz matriz1(n, m); //matriz1 objeto de la clase

	matriz matriz2(n, m); // segundo objeto
	matriz matriz3;
	matriz1.cargar();
	cout << "Matriz 2" << endl;
	matriz2.cargar();

	matriz3.sumarmatrices(matriz1, matriz2);
	cout << "Matriz 3" << endl;
	matriz3.mostrar();
	cout << endl;
	if (matriz1.verifcuadrada())

		matriz1.mostrarDiagonal();
	else
		cout << "no es cuadrada";
	cout << endl;
	//segunda matriz
	if (matriz2.verifcuadrada())

		matriz2.mostrarDiagonal();
	else
		cout << "no es cuadrada";

	cout << endl;
	cout << "la suma de la diagonal de la matriz 1: " << matriz1.sumarDiagonal() << endl;
	cout << "la suma de la diagonal de la matriz 2: " << matriz2.sumarDiagonal() << endl;

	cout << "el numero de filas es: " << matriz1.devolverfila() << endl;


	system("pause");
	return 0;
}