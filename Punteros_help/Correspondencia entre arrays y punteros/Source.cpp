#include<iostream>
#include "stdlib.h"

using namespace std;

// Correspondencia entre arreglos y punteros

int main() {
	int numeros[] = { 1,2,3,4,5 };

	// Vamos a crear una var puntero para que a travez de un bucle me muestre
	// todos los elementos de mi vector
	int* dir_numeros;

	// Mi puntero almacena la direccion en memoria de mi primer elemento,
	// pero es mucho codigo escribir uno por uno
	//dir_numeros = &numeros[0];

	// entonces se hace esto
	dir_numeros = numeros;
	for (int i = 0; i < 5; i++)
	{
		// Para recorrer el arreglo en el puntero tengo que poner ++
		// para que me aumente 4 bytes
		cout << "Elemento del vector [" << i << "]: " << *dir_numeros++ << endl;
	}

	system("pause");
	return 0;
}
