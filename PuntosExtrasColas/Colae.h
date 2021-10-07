#pragma once
#define MAX 100
class Colae
{
private:
	int info[MAX];
	int ini, fin;
public:
	Colae();
	bool Encolar(int Valor);
	bool Desencolar(void);
	bool PrimeraCola(int& Valor);

	bool UltimoCola(int& Valor);

	bool ColaVacia();
	void mostrar();

};

