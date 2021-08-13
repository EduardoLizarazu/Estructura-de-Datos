// vec01Sumar.cpp: define el punto de entrada de la aplicación de consola.
// ej. 01 Sumar los elementos de un vector A tamaño 6

#include <conio.h>
#include <iostream>
using namespace std;

#define NMAX 50    //Define una constante NMAZ variable global

int main(void){
	int A[NMAX], i, S,N;
//    LEER EL VECTOR
    cout<<"Nro de alumnos:";cin>>N;

    for(i=0;i<N;i++){
	   	cout<<i+1<<")";
		cin>>A[i];
	}
//	 SUMAR LOS ELEMENTOS
	S=0;
	for(i=0;i<N;i++){ 
		S=S+A[i];
	}

//	 IMPRIMIR LA SUMA
	cout<<"La suma es:"<<S<<endl;
	getch();
	return 0;
}
