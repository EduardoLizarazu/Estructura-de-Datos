#pragma once
#pragma once
#define MAX 100
class Colae
{
private:
	int info[MAX];
	int ini, fin;
public:
	Colae();
	bool Encolar(int n);
	bool Desencolar(void);
	bool PrimeraCola(int& Valor);
	bool ColaVacia();
	void mostrar();
	void serie(int n);

};

