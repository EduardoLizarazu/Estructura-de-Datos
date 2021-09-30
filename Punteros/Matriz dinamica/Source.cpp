#include<iostream>
#include "stdlib.h"

using namespace std;

/* MATRIZ DINAMICA 
* 
* Ej: Rellenar una matriz de NxM y mostrar su contenido
* 
* **puntero_matriz ->	*puntero_fila -> [int] [int]
*						*puntero_fila -> [int] [int] 
*						*puntero_fila -> [int] [int]
* 
* 		1	2	3			1		->	2	3
*		4	5	6			4		->	5	6
*		7	8	9			7		->	8	9
*/

void pedirDatos();
void mostrarMatriz(int**, int, int);

//Esto se conoce como puntero de punteros, porque voy a dar un puntero hacia
// otro puntero
int** puntero_matriz, nFilas, nCol;

int main() {
	pedirDatos();
	mostrarMatriz(puntero_matriz, nFilas, nCol);

	// LIBERAR LA MEMORIA QUE HEMOS UTILIZADO EN LA MATRIZ
	for (int i = 0; i < nFilas; i++)
	{
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digite el numero de filas: ";
	cin >> nFilas;
	cout << "Digite el numero de columnas: ";
	cin >> nCol;

	// RESERVANDO MEMORIA PARA LA MATRIZ DINAMICA
	// Reservando memorias para las filas, pero necesita ser un puntero,
	// porque la primera fila señala a las siguientes filas
	puntero_matriz = new int*[nFilas];

	for (int i = 0; i < nFilas; i++)
	{
		// Reservando memorias para las columnas
		puntero_matriz[i] = new int[nCol];
	}


	cout << "\nDigitando elementos de la matriz: \n";
	for (int i = 0; i < nFilas; i++)
		for (int j = 0; j < nCol; j++)
		{
			cout << "Digite un numero[" << i << "] [" << j << "]: ";
			// puntero_matriz[i][j]
			cin >> *(*(puntero_matriz + i) + j);
		}
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol) {
	cout << "\n\nImprimiendo matriz: \n";
	for (int i = 0; i < nFilas; i++)
		for (int j = 0; j < nCol; j++)
		{
			cout << *(*(puntero_matriz + i) + j) << " ";
		}
	cout << endl;
}