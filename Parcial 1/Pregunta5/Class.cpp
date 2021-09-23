#include "Class.h"
#include "iostream"
using namespace std;
Class::Class(){}
Class::~Class(){}

void Class::set_registro(int _n_reg) {
	n_reg = _n_reg;
}
int Class::get_registro() {
	return n_reg;
}
void Class::set_n(int _n) {
	n = _n;
}
int Class::get_n() {
	return n;
}
void Class::leerVec(int V[]) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ")";
		cin >> V[i];
	}
}
void Class::ImprimaVec(int V[]) {
	int aux;
	for (int i = 0; i < n / 2; i++) {
		aux = V[i];
		V[i] = V[n - 1 - i];
		V[n - 1 - i] = aux;
	}
}