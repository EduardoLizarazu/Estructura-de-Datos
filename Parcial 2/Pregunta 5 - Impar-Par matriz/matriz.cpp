#include "matriz.h"
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

void matriz::parImpar() {
	int par = 0;
	int impar = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (Mat[i][j] % 2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}
	cout << "Hay " << par << " pares" << endl;
	cout << "Hay " << impar << " impares" << endl;
}


