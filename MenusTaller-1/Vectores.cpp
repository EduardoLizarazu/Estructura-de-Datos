#include "iostream"
#include "stdlib.h"
#include <string>
#include <vector>
#include "Vectores.h"
using namespace std;

Vectores::Vectores(int _n) {
	n = _n;
}

Vectores::~Vectores(void) {

}

// Eduardo
void Vectores::LeerVec(string nombres[], int notas[]) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ") Ingrese un nombre: ";
		cin >> nombres[i];
		cout << "Ingrese la nota de "<<nombres[i]<<": ";
		cin >> notas[i];
	}
}
void Vectores::ImprimaNom(string nombres[]) {
	for (int i = 0; i < n; i++) {
		cout << nombres[i] << endl;
	}
}

void Vectores::BubleSort(string V[]) {
	string aux;
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) {
			if (V[i] > V[i + 1]) {
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
	Vectores::ImprimaNom(V);
}



int Vectores::MejorNota(int V[]) {
	int aux;
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) {
			if (V[i] < V[i + 1]) {
				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
	return V[0];
}

int Vectores::Promedio(int V[]) {
	int aux=0, promedio;
	for (int i = 0; i < n; i++)
	{
		aux += V[i];
	}
	promedio = aux / n;
	return promedio;
}

// MARIAM

void Vectores::BubleMejores3(int N[])
{
	int i, j;

	int au;
	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - 1 - j; i++)
		{
			if (N[i] < N[i + 1])
			{
				au = N[i];
				N[i] = N[i + 1];
				N[i + 1] = au;
			}
		}
	}
}

void Vectores::LeerVecM(int N[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << ") ";
		cout << "Ingrese la nota: ";
		cin >> N[i];

	}
}

void Vectores::ImprimaVec(int N[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << N[i] << endl;
	}
	cout << endl;
}

// ESTRELLA
void Vectores::cargarVector(int vec[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese v[" << i << "]= ";
		cin >> vec[i];
	}
}

int Vectores::contarPos(int vec[])
{
	int pos = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] > 0) {
			pos++;
		}
	}
	return pos;
}

int Vectores::contarNeg(int vec[])
{
	int neg = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] < 0) {
			neg++;
		}
	}
	return neg;
}
int Vectores::contarCer(int vec[])
{
	int cer = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] == 0) {
			cer++;
		}
	}
	return cer;

}
