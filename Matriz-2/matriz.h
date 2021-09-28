#pragma once
#define MAX 10
class matriz
{
private:
	int Mat[MAX][MAX];
	int n;
	int m;
public:
	matriz();
	matriz(int _n, int _m);
	~matriz(void);
	void cargar();
	bool verifcuadrada();
	void mostrar(void);
	void mostrarDiagonal();
	int sumarDiagonal();
	int devolverfila();
	void sumarmatrices(matriz mat1, matriz mat2);
};

