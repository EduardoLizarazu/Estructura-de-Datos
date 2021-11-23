#pragma once
#include "iostream"
using namespace std;
class Cola
{
private:
	class Nodo {
	public: 
		int info;
		Nodo* sig;
	};
	Nodo* raiz;
	Nodo* fondo;
public:
	Cola();
	~Cola();
	void insertar(int x);
	void imprimir();
	bool vacia();
	bool llena();
};

