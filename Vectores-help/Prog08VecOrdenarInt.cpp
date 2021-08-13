/* Ordenar char
	Dada una lista de alumnos y sus notas
	se desea tener las tres mejores notas.
*/

// Vec05Buble.cpp: define el punto de entrada de la aplicaci�n de consola.
//

// problema: ordenar por metodo BUBLE


#include<iostream>
#include<conio.h>
using namespace std;
#define NMAX 100 
void LeerVec(int V[], int n);
void ImprimaVec(int V[],int n);
void BubleSort(int V[],int n);
int main(){
	int A[NMAX], n;
	// LEER VECTOR A, B -- juan
    cout<<"Tama�o del vector:";cin>>n;
	cout<<"Datos del vector"<<endl;
	LeerVec(A,n);  // invocando al subprograma LeerVec(vector, tama�o)
	BubleSort(A,n);
	
	// ESCRIBIR RESULTADO ORDENADO
   cout<<"VECTOR ORDENADO"<<endl;
   ImprimaVec(A,n);
   getch();
   return 0;
}

// SUBPROGRAMAS
void LeerVec(int V[], int n){
	int i;
	for(i=0;i<n;i++){   
		cout<<i+1<<") ";
		cin>>V[i];
    }
}
void ImprimaVec(int V[],int n){
	int i;
	for(i=0;i<n;i++){
       cout<<V[i]<<"  ";
    }
	cout<<endl;
}

void BubleSort(int V[],int n){
	int i,j, aux;
  	for(j=0;j<n-1;j++){
  		for(i=0;i<n-1-j;i++){
			if(V[i]>V[i+1]){
	 			aux=V[i];
	    		V[i]=V[i+1];
	    		V[i+1]=aux;
				ImprimaVec(V,n);
	  		}
		}
	}
}
