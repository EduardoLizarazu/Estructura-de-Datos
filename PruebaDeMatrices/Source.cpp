#include<iostream>
#include "stdlib.h"
#define MAX 50
using namespace std;
void cargarMatriz(int matriz[MAX][MAX], int fila, int col);
void mostrarMatriz(int matriz[MAX][MAX], int fila, int col);
int main() {
	/*
	int edades[3][2] = { 
		{1,2},
		{9,8},
		{14,21} 
	};
	*/
	int matriz[MAX][MAX];
	int tamfila, tamcol;
	cout << "Fila: ";
	cin >> tamfila;
	cout << "Columna: ";
	cin >> tamcol;
	// cargar
	cargarMatriz(matriz, tamfila, tamcol);
	// mostrar
	mostrarMatriz(matriz, tamfila, tamcol);

	system("pause");
	return 0;
}
void cargarMatriz(int matriz[MAX][MAX], int fila, int col) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Matriz[" << i << "][" << j << "]";
			cin >> matriz[i][j];
		}
	}
		
}

void mostrarMatriz(int matriz[MAX][MAX], int fila, int col) {
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Matriz[" << i << "][" << j << "]" << matriz[i][j] << endl;
		}
	}
}