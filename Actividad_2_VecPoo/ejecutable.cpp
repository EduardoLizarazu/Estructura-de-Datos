#include "iostream"
#include "stdlib.h"
#include "maxValue.h"
using namespace std;
// prototipos de funcion
void ejerciciosDel_1_al_5();
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