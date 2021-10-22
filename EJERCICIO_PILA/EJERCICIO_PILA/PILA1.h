#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "NODO.h"
using namespace std;
using namespace msclr::interop;
const int NP1=80;
class PILA1:public NODO
{
	NODO pila[NP1];
	int tope;
public:
	PILA1(void);
	int Get_tope();
	bool Pila_vacia();
	bool Pila_llena();
	bool Insertar(NODO elemento);
	bool Eliminar(NODO &elemento);
	PILA1 This_pila() { return *this;}
	void This_pila(PILA1 x) { *this=x;}
};

