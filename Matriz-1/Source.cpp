#include "iostream"
#include "stdlib.h"
#include "Matriz.h"
using namespace std;

void menu();
int main() {
	int op = 0, matriz[MAX][MAX], tamfila, tamcol;
	bool salir;

	Matriz math;
	cout << "Ingrese el tamano de la fila: "; cin >> tamfila;
	cout << "Ingrese el tamano de la col: "; cin >> tamcol;

	salir = true;
	while (salir)
	{
		menu();
		cin >> op;
		switch (op)
		{
		case 1:
			math.cargarMatriz(matriz, tamfila, tamcol);
			break;
		case 2:
			math.mostrarMatriz(matriz, tamfila, tamcol);
			break;
		case 3:
			cout << "La suma totol es: " <<
				math.sumarMatriz(matriz, tamfila, tamcol)
				<< endl;
			break;
		case 4:
			cout << "Saliendo ...." << endl;
			salir = false;
			break;
		default:
			cout << "NO INGRESE UNA DE LA OPCIONES!!!" << endl;
			break;
		}
		
	}


	cout << "Fin del programa";
	system("pause");
	return 0;
}

void menu() {
	cout << "\nMENU" << endl;
	cout << "1. Cargar Matriz" << endl;
	cout << "2. Mostrar Matriz" << endl;
	cout << "3. Sumar Matriz" << endl;
	cout << "4. Salir" << endl;
}

