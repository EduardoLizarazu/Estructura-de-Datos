
#include "PILA1.h"
PILA1::PILA1(void)
{
	tope = -1;
}
int PILA1::Get_tope()
{
	return tope;
}
bool PILA1::Pila_vacia()
{

	if (tope == -1) { return true; }
	else { return false; }
}
bool PILA1::Pila_llena()
{
	if (tope == NP1) { return true; }
	else return false;
}
bool PILA1::Insertar(NODO elemento)
{
	if (Pila_llena() == true) { return false; }

	else {
		tope++;
		pila[tope] = elemento;
		return true;
	}

}
bool PILA1::Eliminar(NODO& elemento)
{
	if (Pila_vacia() == true) { return false; }
	else {
		elemento = pila[tope];
		tope--;
		return true;
	}
}