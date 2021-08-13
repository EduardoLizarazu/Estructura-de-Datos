// Crear programa en c++ que utilice menus, considerando ejercicios 
// de areas, serie, operaciones aritmeticas, publicar en su github
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void menu();
int areaTriangulo(int b, int h);
int funcionAlgebraicaDeSerie(int repeticiones, int potencia);
int funcionAlgebraica(int n1, int n2);
int main(){
    int op;
    int x, y;
    
    op=0;
    while(op!=4){
        menu();
        cout<<"Ingrese una de las opciones => ";cin>>op;
        switch (op){
            case 1:
                cout<<"Ingrese la base y la altura => ";cin>>x>>y;
                cout<<"Respuesta => "<<areaTriangulo(x,y)<<endl;
                break;
            case 2:
                cout<<"Ingrese numero de repeticiones => ";cin>>x;
                cout<<"Ingrese numero de potencia => ";cin>>y;
                cout<<"Respuesta => "<<funcionAlgebraicaDeSerie(x, y)<<endl;
                break;
            case 3:
                cout<<"Ingrese dos numeros => ";cin>>x>>y;
                cout<<"Respuesta => "<<funcionAlgebraica(x, y)<<endl;
                break;
            case 4:
                cout<<"Saliendo del programa ..."<<endl;
                break;
            default:
                cout<<"No ingreso una de las opciones!"<<endl;
                break;
        }
    }
    cout<<"Fin del programa";
    getch();
    return 0;
}

void menu() {
    cout<<"\n\t---MENU---"<<endl;
    cout<<"Opcion 1 => Calcular Areas de un triangulos"<<endl;
    cout<<"Opcion 2 => Calcular series"<<endl;
    cout<<"Opcion 3 => Calcular Operaciones aritmicas"<<endl;
    cout<<"Opcion 4 => Salir"<<endl;
    
}

int areaTriangulo(int b, int h){
    int res=0;
    res = b * h;
    return res;
}

int funcionAlgebraicaDeSerie(int repeticiones, int potencia){
    int res=0;
    int aux=0;
    for (int i = 0; i < repeticiones; i++){
        aux = pow(2,potencia);
        res += aux;
    }
    return res;
}

int funcionAlgebraica(int n1, int n2){
    int res;
    res = n1+n2;
    return res;
}