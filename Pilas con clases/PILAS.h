#pragma once
#include <iostream>
#include <string.h>
using namespace std;
const int NP = 80;
class PILAS
{
	string pila[NP];
	int tope;
public:
	PILAS(void);
	int Get_tope();
	bool Pila_vacia();
	bool Pila_llena();
	bool Insertar(string elemento);
	bool Eliminar();
	PILAS This_pila() { return *this; }
	void This_pila(PILAS x) { *this = x; }
};

