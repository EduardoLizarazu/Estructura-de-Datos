#include "matriz.h"
#include <iostream>
using namespace std;


matriz::matriz(int _n, int _m)
{
	n = _n;
	m = _m;
}

matriz::matriz()
{
}


matriz::~matriz(void)
{
}

void matriz::cargar()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "M[ " << i << "] [ " << j << "]= ";
			cin >> Mat[i][j];
		}
	}
}

bool matriz::verifcuadrada()
{
	if (n == m)
		return true;
	else
		return false;

}

void matriz::mostrar(void)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "M[ " << i << "] [ " << j << "]= ";
			cout << Mat[i][j];
		}
	}
}

void matriz::mostrarDiagonal()
{
	for (int i = 0; i < n; i++)
		cout << Mat[i][i];
}

int matriz::sumarDiagonal()
{
	int aux = 0;  //acumulador
	for (int i = 0; i < n; i++)
		aux = aux + Mat[i][i];
	return aux;
}

int matriz::devolverfila()
{
	return n;
}


void matriz::sumarmatrices(matriz mat1, matriz mat2)
{
	for (int i = 0; i < mat1.n; i++)
		for (int j = 0; j < mat1.m; j++)
			Mat[i][j] = mat1.Mat[i][j] + mat2.Mat[i][j];
	n = mat1.n;
	m = mat1.m;
}
