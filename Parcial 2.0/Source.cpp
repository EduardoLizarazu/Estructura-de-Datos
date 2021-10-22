#include<iostream>
#include "stdlib.h"
#include "Colae.h"

using namespace std;

int main() {
	int elem;
	int op;
	bool salir;
	int serie;
	Colae colita;

	salir = true;
	while (salir)
	{
		cout << "\n1. Insertar elemento" << endl;
		cout << "2. Mostrar" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			cout << "Saliendo ...." << endl;
			salir = false;
			break;
		case 1:
			cout << "Ingrese el numero de elementos a generar: ";
			cin >> elem;
			colita.Encolar(elem);
			break;
		case 2:
			colita.mostrar();
			break;
		default:
			cout << "NO INGRESO UNA DE LAS OPCIONES!" << endl;
		}
	}

	cout << "Fin del programa";
	system("pause");
	return 0;
}