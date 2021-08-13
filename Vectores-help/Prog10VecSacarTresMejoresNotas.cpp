#include<iostream>
#include<conio.h>
using namespace std;
#define NMAX 100 
void LeerVec(int V[], int n);
void ImprimaVec(string V[],int n);
void BubleSort(int V[],int n);
void BubleSortS(string V[],int n);
int main(){
	int A[NMAX], n;
	// LEER VECTOR A, B -- juan
    cout<<"Tamaño del vector:";cin>>n;
	cout<<"Datos del vector"<<endl;
	LeerVec(A,n);  // invocando al subprograma LeerVec(vector, tamaño)
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
void ImprimaVec(string V[],int n){
	int i;
	for(i=0;i<3;i++){
       cout<<V[i]<<"  ";
    }
	cout<<endl;
}

void BubleSort(int V[],int n){
	int i,j, aux;
  	for(j=0;j<n-1;j++){
  		for(i=0;i<n-1-j;i++){
			if(V[i]<V[i+1]){
	 			aux=V[i];
	    		V[i]=V[i+1];
	    		V[i+1]=aux;
				ImprimaVec(V,n);
	  		}
		}
	}
}

void BubleSortS(string V[],int n){
	string aux;
  	for(int j=0;j<n-1;j++){
  		for(int i=0;i<n-1-j;i++){
			if(V[i]<V[i+1]){
	 			aux=V[i];
	    		V[i]=V[i+1];
	    		V[i+1]=aux;
				ImprimaVec(V,n);
	  		}
		}
	}
}
