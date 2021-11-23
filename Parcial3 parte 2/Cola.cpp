#include "Cola.h"

Cola::Cola() {
	raiz = NULL;
	fondo = NULL;
}
Cola::~Cola() {
	Nodo* reco = raiz;
	Nodo* bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Cola::insertar(int x) {
	Nodo* nuevo;
	nuevo = new Nodo();
	if (true) // Funcion llenar()
	{
		nuevo->info = x;
		nuevo->sig = NULL;
	}
	
	if (vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else
	{
		fondo->sig = nuevo;
		fondo = nuevo;
	}
}

void Cola::imprimir() {
	Nodo* reco = raiz;
	cout << "Listando todos los elementos" << endl;
	while (reco != NULL)
	{
		cout << reco->info << "-";
		reco = reco->sig;
	}
	cout << endl;

}

bool Cola::vacia() {
	if (raiz == NULL)
	{
		return true;
	} 
	else
	{
		return false;
	}
}

bool Cola::llena() {
	int aux = 0;
	if (true and aux <= 10)
	{
		aux++;
		return true;
	}
	
}