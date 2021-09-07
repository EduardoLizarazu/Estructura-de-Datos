#include "iostream"
#include "stdlib.h"
#include "maxValue.h"
using namespace std;
// prototipos de funcion
void ejerciciosDel_1_al_5();
void ejercicio17();
int menu_ejercicio16();
void ejercicio16();
void ejercicio15();
void ejercicio12();
void ejercicio11();
void ejercicio10();
void ejercicio9();
void ejercicio8();
void ejercicio7();
void ejercicio6();
int main() {
	int opcion;
	bool salir;
	salir = true;
	while (salir) {
		cout << "\nIngrese el ejercicio:" << endl;
		cout << "1. Ejercicios del 1 al 5" << endl;
		cout << "2. Ejercicio 6" << endl;
		cout << "3. Ejercicio 7" << endl;
		cout << "4. Ejercicio 8" << endl;
		cout << "5. Ejercicio 9" << endl;
		cout << "6. Ejercicio 10" << endl;
		cout << "7. Ejercicio 11" << endl;
		cout << "8. Ejercicio 12" << endl;
		cout << "9. Ejercicio 15" << endl;
		cout << "10. Ejercicio 16" << endl;
		cout << "11. Ejercicio 17" << endl;
		cout << "0. Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 0:
			cout << "Saliendo...." << endl;
			salir = false;
			break;
		case 1:
			ejerciciosDel_1_al_5();
			break;
		case 2:
			ejercicio6();
			break;
		case 3:
			ejercicio7();
			break;
		case 4:
			ejercicio8();
			break;
		case 5:
			ejercicio9();
			break;
		case 6:
			ejercicio10();
			break;
		case 7:
			ejercicio11();
			break;
		case 8:
			ejercicio12();
			break;
		case 9:
			ejercicio15();
			break;
		case 10:
			ejercicio16();
			break;
		case 11:
			ejercicio17();
			break;
		default:
			cout << "NO INGRESO UNA DE LAS OPCIONES" << endl;
			break;
		}
	}

	cout << "Fin del programa!" << endl;
	system("pause");
	return 0;
}

void ejerciciosDel_1_al_5() {
	int n;
	float v[100];
	cout << "Ingrese el tamaño del vector: "; cin >> n;
	maxValue objeto = maxValue(n);
	objeto.leerVec(v);
	cout << "\nEjercicio 1:" << endl;
	cout << "El valor mas alto es: " << objeto.maximoValor(v) << endl;

	cout << "\nEjercicio 2:" << endl;
	cout << "El valor mas bajo es: " << objeto.minValor(v) << endl;

	cout << "\nEjercicio 3:" << endl;
	cout << "El promedio es: " << objeto.promedio(v) << endl;

	cout << "\nEjercicio 4:" << endl;
	cout << "El original es: "; objeto.imprimirVec(v);
	cout << "El invertido es: "; objeto.invertirVec(v);

	cout << "\nEjercicio 5:" << endl;
	cout << "El vector es capicua? "; objeto.capicua(v);
}

void ejercicio9() {
	int n1, v1[100], n2, v2[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n1;
	cout << "Ingrese el tamaño del vector 2: "; cin >> n2;
	maxValue objeto2;
	objeto2.leerVec(n1, v1, n2, v2);
	cout << "El vector concatenado es: ";
	objeto2.concatenarVec(v1, v2, n1, n2);
}

void ejercicio8() {
	int n, v[100];
	cout << "Ingrese el tamaño del vector: "; cin >> n;
	maxValue objeto8 = maxValue(n);
	objeto8.leerVec(v);
	cout << "El maximo valor obtenido de la diferencia es: ";
	cout << objeto8.diferencia_2valores_conecutivos_vec(v) << endl;
}

void ejercicio7() {
	int n;
	maxValue objeto7;
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << "El numero " << n << " escrito seria: ";
	objeto7.traducirNumerosALiterales(n);
}

void ejercicio6() {
	int n, v[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n;
	maxValue objeto3 = maxValue(n);
	objeto3.leerVec(v);
	objeto3.promedioCada3Valores(v);
}

void ejercicio10() {
	int n1, v1[100], n2, v2[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n1;
	cout << "Ingrese el tamaño del vector 2: "; cin >> n2;
	maxValue objeto10;
	objeto10.leerVec(n1, v1, n2, v2);
	cout << "El vector intercalado es: ";
	objeto10.intercalarVec(v1, v2, n1, n2);
}

void ejercicio11() {
	int n, v[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n;
	maxValue objeto11 = maxValue(n);
	objeto11.leerVec(v);
	objeto11.contador_negativos_positivos_ceros_vec(v);
}

void ejercicio12() {
	int n, v[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n;
	maxValue objeto12 = maxValue(n);
	objeto12.leerVec(v);
	cout << "El vector sin duplicados es: " << endl;
	objeto12.eliminar_numeros_duplicados_vec(v);

}

void ejercicio15() {
	int n, v[100];
	cout << "Ingrese el tamaño del vector 1: "; cin >> n;
	maxValue objeto15 = maxValue(n);
	objeto15.leerVec(v);
	cout << "Las mejores tres notas son: " << endl;
	objeto15.tres_mejores_notas(v);
}

int menu_ejercicio16() {
	int escoger = 0;
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
void ejercicio16() {
	string nombre[100];
	int notas[100], n, escoger = 0;
	bool condicion;

	cout << "Ingrese el tamaño de su vector: ";
	cin >> n;
	maxValue objeto16 = maxValue(n);

	objeto16.leerVec(nombre, notas);

	condicion = true;
	while (condicion) {

		escoger = menu_ejercicio16(); // Menu
		switch (escoger)
		{
		case 1:
			cout << endl;
			objeto16.ImprimaNom(nombre);
			break;
		case 2:
			cout << endl;
			objeto16.BubleSort(nombre);
			break;
		case 3:
			cout << "\nLa mejor nota es: " << objeto16.MejorNota(notas) << endl;
			break;
		case 4:
			cout << "\nEl promedio (int) es: " << objeto16.Promedio(notas) << endl;
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

void ejercicio17() {
	cout << "Los primeros numeros fibonnaci generados en un vector son: " << endl;
	maxValue objeto17;
	objeto17.fibonacci_vec();
}