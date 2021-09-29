#include<iostream>
#include "stdlib.h"

using namespace std;
/* Declaracion de Punteros
* 
* Puntero: Es una variable que va a almacenar la direccion
*		de memoria donde se esta guardando otra variable
* 
* &n = La direccion de n
* *n = La variable cuya direccion esta almacenada en n
* 
*/
int main() {
	// Creacion de puntero, que me va a guardar la direccion de memoria 
	int num, *dir_num;
	
	num = 20; 
	// Me almacena la direccion o posicion exacta de num
	dir_num = &num;

	cout << "Numero: " << num << endl;
	cout << "Direccion de memoria: " << &num << endl;

	cout << endl;

	// Me va a mostrar lo que hay en esa posicion de memoria 
	cout << "Numero: " << *dir_num << endl;
	cout << "Direccion de memoria: " << dir_num << endl;

	system("pause");
	return 0;
}
