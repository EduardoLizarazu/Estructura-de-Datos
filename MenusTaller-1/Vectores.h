#pragma once
#include <string>
#include <vector>
using std::string;
class Vectores
{
private:
	int n;
public:
	
	Vectores(int _n);
	~Vectores(void);
	// Eduardo
	void LeerVec(string nombres[], int notas[]);
	void ImprimaNom(string nombres[]);
	//void ImprimaNotas(int notas[]);
	void BubleSort(string V[]);
	int MejorNota(int V[]);
	int Promedio(int V[]);

	// MARIAM
	void BubleMejores3(int N[]);
	void ImprimaVec(int N[]);
	void LeerVecM(int N[]);

	// estrella
	void cargarVector(int vec[]);
	int contarPos(int vec[]);
	int contarNeg(int vec[]);
	int contarCer(int vec[]);
};
