// Ejemploclase2.cpp : Defines the entry point for the console application.

#include <iostream>
#include "Triangulo.h"
#include "conio.h"
using namespace std;

int main(){
	float b,h, areat;
	
	cout<<"Ingresar base:";
	cin>>b;
	cout<<"Ingresar altura:";
	cin>>h;
	Triangulo triangulito(b,h);  // Una instancia de la clase
	triangulito.set_base(b);
	areat=triangulito.calcular_area(b,h); //llamando al metodo de la clase
	cout << "El area del triangulo es: "<< areat;
	getch();
    return 0;
}