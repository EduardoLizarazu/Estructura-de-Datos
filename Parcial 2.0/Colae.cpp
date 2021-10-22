#include "Colae.h"
#include "Math.h"
#include<iostream>
using namespace std;

Colae::Colae() {
	ini = 0; fin = 0;
}


bool Colae::Desencolar() {
	bool error;
	if (ColaVacia())
	{
		error = true;
	}
	else
	{
		error = false;
		ini++;
	}
	return error;
}

bool Colae::PrimeraCola(int& Valor) {
	bool error;
	if (ColaVacia())
	{
		error = true;
	}
	else
	{
		error = false;
		Valor = info[ini];
		cout << "Primer valor: " << Valor << endl;
	}
	return error;
}



bool Colae::ColaVacia(void) {
	bool b_aux;
	if (ini == fin) {
		b_aux = true;
	}
	else {
		b_aux = false;
	}
	return b_aux;
}
void Colae::mostrar(void) {
	for (int i = ini; i < fin; i++) {
		cout << "[" << info[i] << "]" << endl;
		cout << endl;
	}

}

void Colae::serie(int n) {
	for (int i = 0; i < n; i=i+2)
	{
		pow(i, 2);
	}
}

bool Colae::Encolar(int n) {
	int aux;
	bool error;
	if (fin == MAX)
	{
		error = true;
	}
	else
	{
		for (int i = 1; i <= n; i = i + 2)
		{
			aux = pow(i, 2);
			info[fin] = aux;
			fin++;
		}
		error = false;
		
	}
	return error;
}

