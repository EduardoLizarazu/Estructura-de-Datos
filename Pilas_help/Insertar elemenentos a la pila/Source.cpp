#include<iostream>
#include "stdlib.h"

using namespace std;

// Lo primero que tenemo que hacer es crear nuestra estructura Nodo
struct Nodo
{
	int dato;
	Nodo* siguiente;
};

// El primer parametro lo ponemos por referencia porque va a ir cambiando
// El segundo es el dato que vamos a insertar en la pila
void agregarPila(Nodo*&, int);

int main() {
	// Vamos a crear un puntero pila de tipo Nodo y lo igualamos a NULL
	// para decirle que el puntero esta vacio.
	Nodo* pila = NULL;
	int n1, n2;

	cout << "Digite un numero: ";
	cin >> n1;
	agregarPila(pila, n1);

	cout << "Digite un numero: ";
	cin >> n2;
	agregarPila(pila, n2);
	system("pause");
	return 0;
}

void agregarPila(Nodo*& pila, int n) {
	// 1. Reservar memoria para un nuevo nodo
	Nodo* nuevo_nodo = new Nodo();
	// 2. Rellenamos el dato
	nuevo_nodo->dato = n;
	// 3. Rellenamos el puntero y igualarlo a pila
	nuevo_nodo->siguiente = pila;
	// 4. Igualar pila al nuevo nodo
	pila = nuevo_nodo;

	cout << "\nElemento " << n << " agregado a PILA correctamente" << endl;
}