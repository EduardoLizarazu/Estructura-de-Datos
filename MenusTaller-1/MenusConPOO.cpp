#include "iostream"
#include "stdlib.h"
#include <string>
#include <vector>
#include "Vectores.h"
using namespace std;

// PROTOTIPOS DE FUNCION
void Estudiantes(); // Eduardo
int menuEstudiantil();
void Mariam();
void Estrella();

int main() {
	bool salir;
	int op;
	salir = true;
	while (salir)
	{
		cout << "\n\nMENU GENERAL DE EJERCICIOS" << endl;
		cout << "1. Eduardo Lizarazu" << endl;
		cout << "2. Mariam Atanacio" << endl;
		cout << "3. Estrella Rojas" << endl;
		cout << "4. Salir" << endl;
		cout << "Ingrese una de las opcines: ";
		cin >> op;
		switch (op)
		{
		case 1:
			Estudiantes(); // Eduardo
			break;
		case 2:
			Mariam();
			break;
		case 3:
			Estrella();
			break;
		case 4:
			salir = false;
			break;
		default:
			cout << "NO INGRESO UNA DE LAS OPCIONES!"<< endl;
		}
	}
	
	cout << "Finalizo el programa" << endl;
	system("pause");
	return 0;
}
// Funciones
void Estudiantes() {
	string nombre[100];
	int notas[100], n, escoger = 0;
	bool condicion;

	cout << "Ingrese el tamaño de su vector: ";
	cin >> n;
	Vectores objeto = Vectores(n);

	objeto.LeerVec(nombre, notas);

	condicion = true;
	while (condicion) {

		escoger = menuEstudiantil(); // Menu
		switch (escoger)
		{
		case 1:
			cout << endl;
			objeto.ImprimaNom(nombre);
			break;
		case 2:
			cout << endl;
			objeto.BubleSort(nombre);
			break;
		case 3:
			cout << "\nLa mejor nota es: " << objeto.MejorNota(notas) << endl;
			break;
		case 4:
			cout << "\nEl promedio (int) es: " << objeto.Promedio(notas) << endl;
			break;
		case 5:
			condicion = false;
			cout << "\nSaliendo del menu estuantil ..." << endl;
			break;
		default:
			cout << "\nNUMERO INVALIDO!" << endl;
		}
	}
}

int menuEstudiantil() {
	int escoger=0;
	cout << "\nMENU ESTUDIANTIL OPCIONES: " << endl;
	cout << "1. Listar alumnos " << endl;
	cout << "2. Ordenar alfabeticamente " << endl;
	cout << "3. Sacar la mejor nota " << endl;
	cout << "4. Sacar el promedio de todas la notas" << endl;
	cout << "5. Salir " << endl;
	cout << "Ingrese una opcion: ";
	cin >> escoger;
	return escoger;
}

// MARIAM FUNCIONES

void Mariam() {
	int n;
	int N[100];
	cout << "Cantidad de notas que deasea ingresar:"; cin >> n;
	cout << " Notas " << endl;
	cout << " -----" << endl;
	Vectores mejorcitos = Vectores(n);
	mejorcitos.LeerVecM(N);
	cout << "Las 3 mejores notas son: " << endl;
	mejorcitos.BubleMejores3(N);
	mejorcitos.ImprimaVec(N);
}

// ESTRELLA FUNCIONES

void Estrella() {
	int vec1[100], n;
	cout << "Ingrese el tamano del vector: "; cin >> n;
	Vectores vector1 = Vectores(n);
	vector1.cargarVector(vec1);
	cout << "La cantidad de numeros positivos: " << vector1.contarPos(vec1) << endl;
	cout << "La cantidad de numeros negativos: " << vector1.contarNeg(vec1) << endl;
	cout << "La cantidad de ceros: " << vector1.contarCer(vec1) << endl;
}