
#include<iostream>
#include<conio.h>
using namespace std;
#define NMAX 50
void leerVec(int V[], int n);
void invertirVec(int V[], int n);
void ImprimaVec(int V[], int n);
int main(){
	int A[NMAX], N;

	
    cout<<"Ingrese el tamaño del vector:";cin>>N;
	leerVec(A, N);    // LEER EL VECTOR
	
	invertirVec(A, N);
	
	cout<<"Vector invertido:"<<endl;
	ImprimaVec(A,N);
	
	
	getch();
	return 0;
}

void leerVec(int V[], int n){
	for(int i=0;i<n;i++){
	   	cout<<i+1<<")";
		cin>>V[i];
	}
}

void invertirVec(int V[], int n){
	int aux;
	for(int i=0; i<n/2; i++){
	   	aux = V[i];
	   	V[i]= V[n-1-i];
	   	V[n-1-i] = aux;
	}
}

void ImprimaVec(int V[], int n)
{int i;
	for(i=0;i<n;i++)
    { 
		cout<<V[i]<<"  ";
    }
	cout<<endl;
}


