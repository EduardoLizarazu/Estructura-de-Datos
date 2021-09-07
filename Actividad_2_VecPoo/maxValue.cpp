#include "maxValue.h"
#include "iostream"
#include <string>
#include <vector>
#include "string.h"
using namespace std;

maxValue::maxValue(int _n){
	n = _n;
}
maxValue::maxValue(){}
maxValue::~maxValue(){}
void maxValue::leerVec(float v[]) {
	int i;
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << ") ";
		cout << "Ingrese un valor: ";
		cin >> v[i];

	}
}

void maxValue::leerVec(int v[]) {
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ") ";
		cout << "Ingrese un valor: ";
		cin >> v[i];

	}
}

void maxValue::leerVec(int n1, int v1[], int n2, int v2[]) {
	for (int i = 0; i < n1; i++)
	{
		cout << i + 1 << ") ";
		cout << "Ingrese un valor 1: ";
		cin >> v1[i];

	}
	for (int i = 0; i < n2; i++)
	{
		cout << i + 1 << ") ";
		cout << "Ingrese un valor 2: ";
		cin >> v2[i];
	}
}

float maxValue::maximoValor(float v[]) {
	float aux;
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) {
			if (v[i] < v[i + 1]) {
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
			}
		}
	}
	return v[0];
}

float maxValue::minValor(float v[]) {
	float aux;
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) {
			if (v[i] > v[i + 1]) {
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
			}
		}
	}
	return v[0];
}

float maxValue::promedio(float v[]) {
	float suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += v[i];
	}
	return suma / n;
}

void maxValue::invertirVec(float v[]) {
	float aux;
	for (int i = 0; i < n / 2; i++) {
		aux = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = aux;
	}
	imprimirVec(v);
}

void maxValue::capicua(float v[]) {
	float aux;
	float v2[100];
	bool condicion=true;
	for (int i = 0; i < n; i++)
	{
		v2[i] = v[i];
	}
	for (int i = 0; i < n / 2; i++) {
		aux = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = aux;
	}
	for (int i = 0; i < n; i++)
	{
		if (v2[i] != v[i]) {
			condicion = false;
		}
	}
	if (condicion) {
		cout << "Es capicua" << endl;
	}
	else {
		cout << "No es capicua" << endl;
	}
}

void maxValue::imprimirVec(float v[]) {
	for (int i = 0; i < n; i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}

void maxValue::imprimirVec(int v[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << v[i];
		cout << " ";
	}
	cout << endl;
}

void maxValue::concatenarVec(int v1[], int v2[], int n1, int n2) {
	int v[100], nMax;
	nMax = n1 + n2;
	for (int i = 0; i < n1; i++)
	{
		v[i] = v1[i];
		v[n1 + i] = v2[i];
	}
	imprimirVec(v, nMax);
}

void maxValue::promedioCada3Valores(int v[]) {
	int p[100], suma=0, promedio=0,aux=0,contador=0;
	for (int i = 0; i < n; i++)
	{
		aux++;
		suma += v[i];
		if (aux>=3)
		{
			promedio = suma / aux;
			aux = 0;
			suma = 0;
			contador++;
			cout << "El promedio " << contador << " es: ";
			cout << promedio << endl;
		}
	}
}

void maxValue::traducirNumerosALiterales(int n) {
	string v[20] = {
		"UNO",
		"DOS",
		"TRES",
		"CUATRO",
		"CINCO",
		"SEIS",
		"SIETE",
		"OCHO",
		"NUEVE",
		"DIEZ",
		"ONCE",
		"DOCE",
		"TRECE",
		"CATORSE",
		"QUINCE",
		"DIECISEIS",
		"DIECISIETE",
		"DIECIOCHO",
		"DIECINUEVE",
		"VEINTE"
	};
	cout << v[n-1] << endl;
}

float maxValue::diferencia_2valores_conecutivos_vec(int v[]) {
	int aux = 0;
	float resta = 0, dif=0;
	bool aux2 = true;
	for (int i = 0; i < n/2; i++)
	{
		resta = v[i] - v[i + 1];
		if (resta>dif or aux2)
		{
			dif = resta;
			aux2 = false;
		}
		resta = 0;
	}
	return dif;
}

void maxValue::intercalarVec(int v1[], int v2[], int n1, int n2) {
	int v[100], nMax, aux=0, aux2=0;
	nMax = n1 + n2;
	for (int i = 0; i < n1; i++)
	{
		// Posicion objetiva: 0 2 4 

		v[i + aux] = v1[i]; // (0+0) (1+1) (2+2)
		aux++; // 0 1 2 
	}
	for (int i = 0; i < n2; i++)
	{	
		// Posicion objetiva: 1 3 5
		aux2++;
		v[i + aux2] = v2[i]; // (0+1) (1+2) (2+3)
	}
	imprimirVec(v, nMax);
}

void maxValue::contador_negativos_positivos_ceros_vec(int v[]) {
	int negativos=0;
	int positivos=0;
	int ceros=0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > 0) 
		{
			positivos++;
		}
		else if (v[i] < 0)
		{
			negativos++;
		}
		else
		{
			ceros++;
		}
	}
	cout << "El numeros de positivos fue de:" << positivos << endl;
	cout << "El numeros de negativos fue de:" << negativos << endl;
	cout << "El numeros de ceros fue de:" << ceros << endl;
}

void maxValue::eliminar_numeros_duplicados_vec(int v[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			///Si encontramos un duplicado
			if (v[i] == v[j]) {

				///Lo vamos intercambiando hasta que quede al final
				for (int k = j; k < n - 1; k++)
					swap(v[k], v[k + 1]);

				///Disminuimos la longitud en 1, lo que significa
				///que se elimina un elemento
				n--;

				///Disminuimos a j para que se quede en el mismo
				///lugar (vease que el elemento que estaba en esa
				///posicion fue eliminado, si no disminuimos j en 1
				///nos saltamos un valor por analizar).
				j--;
			}
		}
	}
	imprimirVec(v, n);
}

void maxValue::tres_mejores_notas(int v[]) {
	int i, j;

	int au;
	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - 1 - j; i++)
		{
			if (v[i] < v[i + 1])
			{
				au = v[i];
				v[i] = v[i + 1];
				v[i + 1] = au;
			}
		}
	}
	imprimirVec(v, 3);
}

void maxValue::leerVec(string nombres[], int notas[]) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ") Ingrese un nombre: ";
		cin >> nombres[i];
		cout << "Ingrese la nota de " << nombres[i] << ": ";
		cin >> notas[i];
	}
}
void maxValue::ImprimaNom(string nombres[]) {
	for (int i = 0; i < n; i++) {
		cout << nombres[i] << endl;
	}
}
void maxValue::BubleSort(string V[]) {
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
	ImprimaNom(V);
}
int maxValue::MejorNota(int V[]) {
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
int maxValue::Promedio(int V[]) {
	int aux = 0, promedio;
	for (int i = 0; i < n; i++)
	{
		aux += V[i];
	}
	promedio = aux / n;
	return promedio;
}

void maxValue::fibonacci_vec() {
	int n, x = 0, y = 1, z = 1, contador;
	int fib[20];
	contador = 0;
	
	for (int i = 1; i < 20; i++) {
		z = x + y; // 0+1 // 1+1 // 1+2 // 2+3
		//cout << z << " "; // 1 2 3 5
		fib[i] = z;
		x = y; // 1 1 2 3
		y = z; // 1 2 3 5
	}
	cout << "1 ";
	imprimirVec(fib, 20);
}