#include<iostream>
#include "stdlib.h"
#include "PILAS.h"

using namespace std;

int main() {
	string elem;
	int op;
	bool salir;

	PILAS pila;

	salir = true;
	while (salir)
	{
		cout << "\n1. Insertar elemento" << endl;
		cout << "2. Eliminar elemento" << endl;
		cout << "3. Cantidad de elementos" << endl;
		cout << "4. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			if (!(pila.Pila_llena()))
			{
				cout << "Ingrese un valor: ";
				cin >> elem;
				pila.Insertar(elem);
			}
			else
			{
				cout << "La pila esta llena!" << endl;
			}
			break;
		case 2:
			if (!(pila.Pila_vacia()))
			{
				cout << "Eliminando elemento " << endl;
				pila.Eliminar();
			}
			else
			{
				cout << "La pila esta vacia!" << endl;
			}
			break;
		case 3:
			cout << "Hay " << pila.Get_tope() + 1 << " elementos en la pila" << endl;
			break;
		case 4:
			cout << "Saliendo ...." << endl;
			salir = false;
			break;
		default:
			cout << "NO INGRESO UNA DE LAS OPCIONES!" << endl;
		}
	}


	cout << "Fin del programa";
	system("pause");
	return 0;
}
