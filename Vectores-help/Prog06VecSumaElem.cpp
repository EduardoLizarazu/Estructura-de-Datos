/*
	Sumar 2 vectores en un tercer vector, cada elemento.
	c[] = A[] + B[]
	A = {34, 56, 87, 10, 25};
	B = {10, 77, 56, 32, 80};
	C = {44, 133, 143, 42, 105}  // salida
*/


#include <conio.h>
#include <iostream>
using namespace std;

#define NMAX 50    

void leerVec(int V[], int n);
void imprimirVec(int V[], int n);
void sumar2Vec(int X[], int Y[],int Z[], int n);

int main(){
	int A[NMAX], B[NMAX], C[NMAX], n;

	// Leer Vectores
	cout<<"Ingrese el tamano del vector 1:"; cin>>n;
	leerVec(A, n);    
	
	cout<<"Ingrese el tamano del vector 2:"; cin>>n;
	leerVec(B,n); 
	// Sumar 2 vectores
	sumar2Vec(A,B,C,n);
	// Imprimir 
	imprimirVec(C, n);
	
	getch();
	return 0;
}

void leerVec(int V[], int n){
	for(int i=0;i<n;i++){
	   	cout<<i+1<<")";
		cin>>V[i];
	}
}

void imprimirVec(int VR[], int n){
	cout<<"El resultado es => "<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<")"<<VR[i]<<endl;
	}
}

void sumar2Vec(int X[], int Y[],int Z[], int n){
	for(int i=0; i<n; i++){
		Z[i] = X[i] + Y[i];
	}
}
