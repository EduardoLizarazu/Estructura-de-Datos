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
	void mostrar(void);
	void parImpar();
};

