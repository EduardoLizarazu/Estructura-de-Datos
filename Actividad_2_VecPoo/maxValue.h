#pragma once
#include <string>
#include <vector>
using std::string;
class maxValue
{
private:
	int n;
public:
	maxValue(int _n);
	maxValue();
	~maxValue();
	void leerVec(float v[]);
	void leerVec(int v[]);
	void leerVec(string nombres[], int notas[]);
	void imprimirVec(float v[]);
	void imprimirVec(int v[], int n);
	void ImprimaNom(string nombres[]);
	void leerVec(int n1, int v1[], int n2, int v2[]);
	float maximoValor(float v[]);
	float minValor(float v[]);
	float promedio(float v[]);
	void invertirVec(float v[]);
	void capicua(float v[]);
	void concatenarVec(int v1[], int v2[], int n1, int n2);
	void promedioCada3Valores(int v[]);
	void traducirNumerosALiterales(int n);
	float diferencia_2valores_conecutivos_vec(int v[]);
	void intercalarVec(int v1[], int v2[], int n1, int n2);
	void contador_negativos_positivos_ceros_vec(int v[]);
	void eliminar_numeros_duplicados_vec(int v[]);
	void tres_mejores_notas(int v[]);
	void BubleSort(string V[]);
	int MejorNota(int V[]);
	int Promedio(int V[]);
	void fibonacci_vec();
};

