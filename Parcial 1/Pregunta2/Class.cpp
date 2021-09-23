#include "Class.h"
#include "iostream"
using namespace std;

Class::Class(int _n) {
	n = _n;
}
Class::~Class(){}

void Class::leerVec(int V[]) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ")";
		cin >> V[i];
	}
}
void Class::invertirVec(int V[]) {
	int aux;
	for (int i = 0; i < n / 2; i++) {
		aux = V[i];
		V[i] = V[n - 1 - i];
		V[n - 1 - i] = aux;
	}
}
void Class::ImprimaVec(int V[]) {
	int i;
	for (i = 0; i < n; i++)
	{
		cout << V[i] << "  ";
	}
	cout << endl;
}
