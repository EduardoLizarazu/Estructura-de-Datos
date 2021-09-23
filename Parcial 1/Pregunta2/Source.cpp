#include<iostream>
#include "stdlib.h"
#include "Class.h"

using namespace std;

int main() {
	int v[100], n;
	cout << "ingrese el tamaño de su vec: ";
	cin >> n;
	Class objeto = Class(n);
	objeto.leerVec(v);
	cout << "Invectido: " << endl;
	objeto.invertirVec(v);
	objeto.ImprimaVec(v);




	system("pause");
	return 0;
}
