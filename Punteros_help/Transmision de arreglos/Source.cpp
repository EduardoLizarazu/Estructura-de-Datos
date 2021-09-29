#include<iostream>
#include "stdlib.h"

using namespace std;

/*	TRANSMISION DE ARREGLOS
* 
* Hallar el maximo elemento de un arreglo
* 
*/
// Para pasarle antes un arreglo a una funcion, teniamos que enviarle
// el arreglo y el numero de elementos del mismo arrglo
// Ahora necesitamos un puntero y el numero de elementos
int hallarMax(int*, int);

int main() {
	const int nElementos = 5;
	int numeros[nElementos] = { 3,5,2,8,1 };

	cout << "El mayor elemento es: " << hallarMax(numeros, nElementos) << endl;

	system("pause");
	return 0;
}

int hallarMax(int *dirVec, int nElementos) {
	int max = 0;

	for (int i = 0; i < nElementos; i++)
	{
		// dirVec + i es para que me mueva el numero de la direccion 
		// de memoria en 4 bytes (para asi recorrer)
		// *(dirVec + i) Es para que me diga lo que esta en esa 
		// direccion de memoria para poder comparar los numeros
		if (*(dirVec + i) > max) {
			max = *(dirVec + i);
		}
	}
	return max;
}