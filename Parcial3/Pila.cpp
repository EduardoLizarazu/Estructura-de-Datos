#include "Pila.h"

Pila::Pila() { raiz = NULL; }
Pila::~Pila(){
	Nodo* reco = raiz;
	Nodo* bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Pila::insertar(int x) {
	Nodo* nuevo;
	nuevo = new Nodo();
	nuevo->info = x;
	if (raiz == NULL)
	{
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else
	{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void Pila::imprimir() {
	Nodo* reco = raiz;
	cout << "Lista de todas las edades de la pila" << endl;
	while (reco != NULL)
	{
		cout << reco->info << "-";
		reco = reco->sig;
	}
	cout << endl;
}