// Crear programa en c++ que utilice menus, considerando ejercicios 
// de areas, serie, operaciones aritmeticas, publicar en su github
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int op;
    float x,y,res;
    
    op=0;
    while(op!=4){
        cout<<"\n\t---MENU---"<<endl;
        cout<<"Opcion 1 => Calcular Areas de un triangulos"<<endl;
        cout<<"Opcion 2 => Calcular series"<<endl;
        cout<<"Opcion 3 => Calcular Operaciones aritmicas"<<endl;
        cout<<"Opcion 4 => Salir"<<endl;
        cout<<"Ingrese una de las opciones => ";cin>>op;
        res=0;
        switch (op){
            case 1:
                cout<<"Ingrese la base y la altura => ";cin>>x>>y;
                res = x * y;
                cout<<"El area es => "<<res<<endl;
                break;
            case 2:
                cout<<"Ingrese numero de repeticiones => ";cin>>x;
                cout<<"Ingrese un numero => ";cin>>y;
                for (int i = 0; i < x; i++){
                    res += y;
                }
                cout<<"Respuesta => "<<res<<endl;
                break;
            case 3:
                cout<<"Ingrese dos numeros => ";cin>>x>>y;
                res = x+y/2;
                cout<<"Respuesta => "<<res<<endl;
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
