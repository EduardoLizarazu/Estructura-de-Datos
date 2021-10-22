#include<iostream>
#include "stdlib.h"
#include "matriz.h"
using namespace std;

int main() {
	int Matriz[MAX][MAX], tamfila, tamcol;
	bool salir;

	cout << "Ingrese el tamano de la fila: "; cin >> tamfila;
	cout << "Ingrese el tamano de la col: "; cin >> tamcol;

	matriz matricita(tamfila, tamcol);
	
	matricita.cargar();

	matricita.parImpar();

	matricita.mostrar();
	system("pause");
	return 0;
}
