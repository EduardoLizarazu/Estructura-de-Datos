/* El proyecto consiste en apilar las edades de los usuarios */
/* LIFO */

#include "iostream"
#include "stdlib.h"
#include "Pila.h"
using namespace std;

int main() {
	bool salir;
	int op, elem;
	Pila* pilita;
	pilita = new Pila();
	
	salir = true;
	while (salir) {
		cout << "1. Insertar" << endl;
		cout << "2. Imprimir" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Ingrese la edad que desea insertar: ";
			cin >> elem;
			pilita->insertar(elem);
			break;
		case 2:
			cout << "Imprimiendo ..." << endl;
			pilita->imprimir();
			break;
		case 0:
			cout << "Saliendo..." << endl;
			salir = false;
			break;
		default:
			cout << "No ingresaste ninguna de las opciones" << endl;
			break;
		}
	}
	delete pilita;
	system("pause");
	return 0;
}

