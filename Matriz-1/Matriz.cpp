#include "iostream"
#include "Matriz.h"

using namespace std;

Matriz::Matriz(int _n, int _m){
	n = _n;
	m = _m;
}
Matriz::~Matriz(){}

void Matriz::cargarMatriz(int matriz[MAX][MAX], int fila, int col) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Matriz[" << i << "] [" << j << "] ";
			cin >> matriz[i][j];
		}
	}
}

void Matriz::mostrarMatriz(int matriz[MAX][MAX], int fila, int col) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Matriz[" << i << "] [" << j << "] " << matriz[i][j] << endl;
		}
	}
}

int Matriz::sumarMatriz(int matriz[MAX][MAX], int fila, int col) {
	int suma = 0;
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			suma += matriz[i][j];
		}
	}
	return suma;
}

////////////////////////////
bool Matriz::verifcuadrada()
{
	if (n == m)
		return true;
	else
		return false;

}
void Matriz::mostrarDiagonal()
{
	for (int i = 0; i < n; i++)
		cout << matriz[i][i];
}
int Matriz::sumarDiagonal()
{
	int aux = 0;  //acumulador
	for (int i = 0; i < n; i++)
		aux = aux + matriz[i][i];
	return aux;
}
int Matriz::devolverfila()
{
	return n;
}
void Matriz::sumarmatrices(Matriz mat1, Matriz mat2)
{
	for (int i = 0; i < mat1.n; i++)
		for (int j = 0; j < mat1.m; j++)
			matriz[i][j] = mat1.matriz[i][j] + mat2.matriz[i][j];
	n = mat1.n;
	m = mat1.m;
}


