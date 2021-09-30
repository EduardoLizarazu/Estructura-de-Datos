#include "PILAS.h"
#include "stdlib.h"

PILAS::PILAS() {
	tope = -1;
}
int PILAS::Get_tope() {
	return tope;
}
bool PILAS::Pila_vacia() {
	if (tope == -1) { return true; }
	else { return false; }
}
bool PILAS::Pila_llena() {
	if (tope==NP){ return true; } 
	else { return false; }
}
bool PILAS::Insertar(string elemento) {
	if (tope == NP) return false;
	else 
	{
		tope++;
		pila[tope] = elemento;
		return true;
	}
}
bool PILAS::Eliminar() {
	if (tope == -1) { return false; }
	else 
	{ 
		tope--;
		return true;
	}
}