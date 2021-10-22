#include "Vector.h"
#include <iostream>
using namespace std;
Vector::Vector(){}

Vector::~Vector(){}

void Vector::repetidos(int Vec[], int n) {
	int aux;
	int rep=0;
	for (int i = 0; i < n; i++)
	{

		if (Vec[n] == aux) {
			rep++;
			aux = Vec[n];
		}
	}
	cout << "numeros repeticiones: " << rep << endl;
}