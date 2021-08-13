// vec01Sumar.cpp: define el punto de entrada de la aplicación de consola.
// obtener los aprobados >=51

#include <iostream>
#include <conio.h>
using namespace std;

#define NMAX 50    

int main(void){
	int A[NMAX], i, S,N;

    cout<<"Nro de alumnos:";cin>>N;

    for(i=0;i<N;i++){
	   	cout<<i+1<<")";
		cin>>A[i];
	}

	cout<<"APROBADOS"<<endl;
	for(i=0;i<N;i++){
		if(A[i]>=51){
		  	cout<<A[i]<<endl;
		}
	}

	
	getch();
	return 0;
}
