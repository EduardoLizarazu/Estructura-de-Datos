#pragma once
#include <iostream>
using namespace std;

class Pila
{
private:
	class Nodo
	{
	public:
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
public:
	Pila();
	~Pila();
	void insertar(int x);
	void imprimir();
};
