#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace msclr::interop;
const int NP=80;
class PILA
{
	string pila[NP];
	int tope;
public:
	PILA(void);
	int Get_tope();
	bool Pila_vacia();
	bool Pila_llena();
	bool Insertar(string elemento);
	bool Eliminar(string &elemento);
	PILA This_pila() { return *this;}
	void This_pila(PILA x) { *this=x;}
};

