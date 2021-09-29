#include<iostream>
#include "stdlib.h"

using namespace std;
/* Ejercicio 1
* Comprobar si un numero es par o impar, y señalar la
* posicion de memoria donde se esta guardando el numero
* Con punteros

*/
int main() {
	int numero, *dir_numero;

	cout << "Digite un numero: ";
	cin >> numero;

	dir_numero = &numero;

	if (*dir_numero%2 == 0)
	{
		cout << "Es numero " << *dir_numero << " es par" << endl;
		cout << "Posicion " << dir_numero << endl;
	}
	else
	{
		cout << "Es numero " << *dir_numero << " es impar" << endl;
		cout << "Posicion " << dir_numero << endl;
	}


	system("pause");
	return 0;
}
