#include<iostream>
#include "stdlib.h"
#include "Colae.h"

using namespace std;

int main() {
	int elem;
	int op;
	bool salir;

	Colae colita;
	
	salir = true;
	while (salir)
	{
		cout << "\nIntegrantes del grupo: " << endl;
		cout << "Eduardo Lizarazu" << endl;
		cout << "Jose Reinaldo" << endl;
		cout << "Sebastian Rojas" << endl;

		cout << "\n1. Insertar elemento" << endl;
		cout << "2. Eliminar elemento" << endl;
		cout << "3. Primera cola" << endl;
		cout << "4. Mostrar" << endl;
		cout << "5. Ultima cola" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			cout << "Saliendo ...." << endl;
			salir = false;
			break;
		case 1:
			cout << "ingrese un valor: ";
			cin >> elem;
			colita.Encolar(elem);
			break;
		case 2:
			colita.Desencolar();
			cout << "Desencolando ..." << endl;
			break;
		case 3:
			colita.PrimeraCola(elem);
			break;
		case 4:
			colita.mostrar();
			break;
		case 5:
			colita.UltimoCola(elem);
			break;
		default:
			cout << "NO INGRESO UNA DE LAS OPCIONES!" << endl;
		}
	}

	cout << "Fin del programa";
	system("pause");
	return 0;
}
