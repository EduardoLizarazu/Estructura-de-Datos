
#include<iostream>
#include<conio.h>
using namespace std;
#define NMAX 100 

void LeerVec(string V[], int n, int N[]);
void ImprimaVec(string V[],int n,int N[]);
void BubleSort(string V[],int n,int N[]);
void BubleMejores3(string V[],int n,int N[]);

int main(){
	string A[NMAX];
  	int  n;
  	int N[NMAX];
	// LEER VECTOR A, B -- juan
    cout<<"Tamaño del vector:";cin>>n;
	cout<<"Datos del vector"<<endl;
	cin.ignore(256,'\n');
	LeerVec(A,n,N);  // invocando al subprograma LeerVec(vector, tamaño)
	BubleSort(A,n,N);
	
// ESCRIBIR RESULTADO ORDENADO
   	cout<<"VECTOR ORDENADO POR NOMBRE"<<endl;
   	ImprimaVec(A,n,N);
   	cout<<"VECTOR ORDENADO POR NOTA"<<endl;
	BubleMejores3(A,n,N);
   	ImprimaVec(A,n,N);
   	cout<<"LAS 3 MEJORES NOTAS"<<endl;
   	ImprimaVec(A,3,N);
   	getch();
   	return 0;
}

// SUBPROGRAMAS
void LeerVec(string V[], int n,int N[]){
	int i;
	for(i=0;i<n;i++){   
	cout<<i+1<<") ";
    cout<<"Ingrese Nombre y apellido"<<endl;
	getline(cin,V[i]);
	cout<<"Ingrese la nota"<<endl;
	cin>>N[i];
	cin.ignore(256,'\n');// LIMPIA EL BUFFER
    }
}

void ImprimaVec(string V[],int n,int N[]){
	int i;
	for(i=0;i<n;i++){
	   cout<<V[i]<<"  "<<N[i]<<endl;
    }
	cout<<endl;
}

void BubleSort(string V[],int n,int N[]){
	int i,j;
 	string aux;
 	int au;
  	for(j=0;j<n-1;j++){
	  	for(i=0;i<n-1-j;i++){
	   		if(V[i]>V[i+1]){
	   			aux=V[i];
	    		au=N[i];
	    		V[i]=V[i+1];
	    		N[i]=N[i+1];
	    		V[i+1]=aux;
	    		N[i+1]=au;
			//	ImprimaVec(V,n,N);
	  		}
     
		}
  	}
}
void BubleMejores3(string V[],int n,int N[]){
	int i,j;
 	string aux;
 	int au;
  	for(j=0;j<n-1;j++){
	  	for(i=0;i<n-1-j;i++){ 
		  	if(N[i]<N[i+1]){
			  	aux=V[i];
	    		au=N[i];
	    		V[i]=V[i+1];
	    		N[i]=N[i+1];
	    		V[i+1]=aux;
	    		N[i+1]=au;
			//	ImprimaVec(V,3,N);
	  		}
     
		}
  	}
}
