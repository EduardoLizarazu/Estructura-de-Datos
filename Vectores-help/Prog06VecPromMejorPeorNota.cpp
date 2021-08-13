// ej. 01 Sumar los elementos de un vector A tamaño N
//  sacar el promedio X
// Problema 2: Sacar la mejor nota, menor nota
// Problema 3: Sacar las 3 mejores notas

#include <conio.h>
#include <iostream>
using namespace std;

#define NMAX 50    

void leerVec(int V[], int n);
int sumarVec(int V[], int n);
int mayorNota(int V[], int n);
int menorNota(int V[], int n);

int main(void){
	int A[NMAX], S, N, mayor, menor;
	int Amayor[NMAX];


    cout<<"Nro de alumnos:";cin>>N;
	leerVec(A, N);    // LEER EL VECTOR
	S = sumarVec(A, N);
	mayor = mayorNota(A,N);
	menor = menorNota(A, N);
//	 IMPRIMIR LA SUMA
	cout<<"La suma es:"<<S<<endl;
	cout<<"El promedio es: "<<S/N<<endl; // El promedio
	cout<<"La nota mayor es: "<<mayor<<endl; // El mayor
	cout<<"La nota menor es: "<<menor<<endl; // El menor
	getch();
	return 0;
}

void leerVec(int V[], int n){
	for(int i=0;i<n;i++){
	   	cout<<i+1<<")";
		cin>>V[i];
	}
}
int sumarVec(int V[], int n){
	int S=0;
	for(int i=0;i<n;i++){ 
	//	 SUMAR LOS ELEMENTOS
		S += V[i];
	}
	return (S);
}

int mayorNota(int V[], int n){
	int mayor = 0;
	for(int i=0; i<n; i++){
		if(V[i] > mayor){
			mayor = V[i];
		}
	}
	return(mayor);
}

int menorNota(int V[], int n){
	int menor = 101;
	for(int i=0; i<n; i++){
		if(menor > V[i]){
			menor = V[i];
		}
	}
	return(menor);
}

