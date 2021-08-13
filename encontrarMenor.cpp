#include<iostream>
#include<conio.h>
using namespace std;
int encontraMenor(int n1, int n2);
int main(){
    int x,y;
    cout<<"Ingrese dos numeros: ";cin>>x>>y;
    cout<<"El menor es: "<<encontraMenor(x,y)<<endl;
    getch();
    return 0;
}
int encontraMenor(int n1, int n2){
    if (n1==n2){
        cout<<"iguales";
    } else if (n1<n2){
        return n1;
    } else {
        return n2;
    } 
    
}


