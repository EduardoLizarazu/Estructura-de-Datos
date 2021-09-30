#include<iostream>
#include "stdlib.h"

using namespace std;

// Lo primero que tenemo que hacer es crear nuestra estructura Nodo
struct Nodo
{
	int dato;
	Nodo* siguiente;
};


void agregarPila(Nodo*&, int);
void sacarPila(Nodo*&, int&);

int main() {
	Nodo* pila = NULL;
	int dato;

	cout << "Digite un numero: ";
	cin >> dato;
	agregarPila(pila, dato);

	cout << "Digite un numero: ";
	cin >> dato;
	agregarPila(pila, dato);

	cout << "Sacando los elementos de la pila : ";
	// mientras no sea el final de la pila
	while (pila != NULL)
	{
		sacarPila(pila, dato);
		if (pila != NULL) // significa que hay mas elementos
		{
			cout << dato << " , ";
		}
		else
		{
			cout << dato << " . ";
		}
	}
	
	cout << endl;
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

void sacarPila(Nodo *&pila, int &n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}