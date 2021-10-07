#include "Colae.h"

#include<iostream>
using namespace std;

Colae::Colae(){
	ini = 0; fin = 0;
}

bool Colae::Encolar(int Valor) {
	bool error;
	if (fin == MAX)
	{
		error = true;
	}
	else
	{
		error = false;
		info[fin] = Valor;
		fin++;
	}
	return error;
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

bool Colae::UltimoCola(int& Valor) {
	bool error;
	if (ColaVacia())
	{
		error = true;
	}
	else
	{
		error = false;
		Valor = info[fin-1];
		cout << "Ultimo valor: " << Valor << endl;
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
void	Colae::mostrar(void) {
	for (int i = ini; i < fin; i++) {
		cout << "[" << info[i] << "]" << endl;
		cout << endl;
	}

}
