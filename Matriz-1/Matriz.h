#pragma once
#define MAX 10
class Matriz
{
private: 
	int matriz[MAX][MAX];
	int _fila;
	int _col;
	int m;
	int n;
public:
	Matriz();
	Matriz(int _n, int _m);
	~Matriz();
	void cargarMatriz(int matriz[MAX][MAX], int fila, int col);
	void mostrarMatriz(int matriz[MAX][MAX], int fila, int tam_col);
	int sumarMatriz(int matriz[MAX][MAX], int fila, int col);

	/////////////////////////////////////////////
	bool verifcuadrada();
	void mostrarDiagonal();
	int sumarDiagonal();
	int devolverfila();
	void sumarmatrices(Matriz mat1, Matriz mat2);
};

