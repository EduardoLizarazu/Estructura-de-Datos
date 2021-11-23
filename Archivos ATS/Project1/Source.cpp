#include<iostream>
#include "stdlib.h"
#include "fstream" // trabajar con archivos
#include "string"
#include <conio.h>
#include <stdio.h>
#include "string.h"

using namespace std;


void escribir();
void lectura();
void anadir();
void bajaFisica();
void bajaLogica();
void bajaLogica2();
void bajaLogica3();

int main() {
	//escribir();
	//lectura();
	//anadir();
	//bajaFisica();
	//bajaLogica();
	//bajaLogica2();
	bajaLogica3();

	system("pause");
	return 0;
}

void escribir() {
	ofstream archivo; // Declaramos nuestro archivo

	string nombreArchivo, frase;
	//cout << "Digite el nombre del archivo: ";
	//getline(cin, nombreArchivo);
	//archivo.open(nombreArchivo.c_str(), ios::out);

	archivo.open("BaseDeDatos/archivos.txt", ios::out); // Abriendo el archivo, y dictando la direccion
	
	// Verificamos si hubo un error
	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1); // salir del programa
	}

	archivo << "Hola mi nombre es Eduardo "; // sirve para copiar en la pantalla
	
	// escribir desde consola
	cout << "\n Digite el texto del archivo: ";
	getline(cin, frase);

	archivo << frase;
	archivo.close(); // Cerrar el archivo
}

void lectura() {
	ifstream archivo; // Lectura
	string texto;

	archivo.open("programacion.txt", ios::in); // Abrimos el archivo en modo lectura

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	while (!archivo.eof()) // mientras no se el final del archivo
	{
		getline(archivo, texto); // copiamos que encontremos en el archivo
		cout << texto << endl;
	}
	
	archivo.close(); // Cerramos el archivo
}

void anadir() {
	ofstream archivo;
	string texto;
	archivo.open("programacion.txt", ios::app); // Abrimos el archivos en modo añadir texto en el

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	archivo << "\n";
	cout << "Digite el texto que quiere anadir: ";
	getline(cin, texto);
	archivo << texto << endl;
	//archivo << "Hola que tal? ";

	archivo.close();
}

// Youtube funciona a medias
void bajaFisica() {
	char nombre[20], profesion[20];
	int edad;

	ifstream salida;
	salida.open("empleados.txt", ios::in);

	ofstream entrada;
	entrada.open("temp.txt", ios::out);

	if (salida.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		char aux[20];

		cout << "Introduce el nombre: ";
		cin >> aux;

		salida >> nombre;

		while (!salida.eof())
		{
			salida >> edad >> profesion;

			if (strcmp(aux, nombre) == 0)
			{
				cout << "El registro se ha eliminado";
				exit(1);
			}
			else
			{
				entrada << nombre << " " << edad << " " << profesion << endl;
			}

			salida >> nombre;
		}

		entrada.close();
		salida.close();

		remove("empleados.txt");
		rename("temp.txt", "empleados.txt");
	}
}

// Libro
//void bajaLogica() {
//	int no_prod; // Variable local para el numero de producto que desea eliminar
//	char op; //Variable local
//	clrscr();
//	cout << "\n\rBAJAS LOGICAS DE REGISTROS DE PRODUCTOS";
//	alias = fopen("PRODUCTO.SEC", "rb+"); // Intenta abrir el archivo PRODUCTO.SEC
//	// en modo de lectura/escritura
//	if (alias == NULL) // Valida la existencia del archivo
//	{
//		cout << "\n\n\n\rNo existe el archivo !!!";
//		cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
//		getch();
//		return;
//	}
//	cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;
//	fread(&Registro, sizeof(Registro), 1, alias);
//	// Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
//	while (!feof(alias)) // Ciclo mientras no se encuentre el final del archivo
//	{
//		if (Registro.no_prod == no_prod)
//		{
//			cout << "\n\rNo Prod Descripcion Cantidad
//				Precio Garantia";
//				cout << "\n\r------------------------------------------------------
//				------------------";
//
//				printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c", Registro.no_prod, Registro.descr
//					ip, Registro.cantidad, Registro.precio, Registro.garantia);
//			Registro.no_prod = 0;
//			strcpy(Registro.descrip, "");
//			Registro.cantidad = 0;
//			Registro.precio = 0.0;
//			Registro.garantia = ' ';
//		}
//	}
//}

// Youtube
void bajaLogica2() {
	//typedef struct reg {
	//	int matricula;
	//	char ayn[20];
	//	int edad;
	//	int baja;
	//}talu;
	//
	//FILE* pf, * pfaux;
	//talu R;
	//char nom[20];
	//pf = fopen("aprobadas.dat", "r");
	//pfaux = fopen("aproaux.dat", "ab");
	//printf("Ingrese nombre de alumno a modificar ....\n");
	//fflush(stdin);
	////getline(cin, nom);
	////gets(nom);
	//fread(&R, sizeof(talu), 1, pf);
	//while (!feof(pf))
	//{
	//	if (strcmp(R.ayn, nom) == 0)
	//	{
	//		R.baja = 1;
	//	}
	//	else
	//	{
	//		fwrite(&R, sizeof(talu), 1, pfaux);
	//		fread(&R, sizeof(talu), 1, pf);
	//	}
	//}
	//fclose(pf);
	//fclose(pfaux);
	//remove("aprobadas.dat");
	//rename("aproaux.dat", "aprobadas.dat");
}

void bajaLogica3() {
	char nombre[20], profesion[20];
	int edad;

	ifstream salida;
	salida.open("empleados.txt", ios::in);

	ofstream entrada;
	entrada.open("temp.txt", ios::out);

	if (salida.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		char aux[20];
		cout << "Introduce el nombre: ";
		cin >> aux;

		salida >> nombre; // empleados lectura
		cout << "1. Salida: " << nombre << endl;

		while (!salida.eof())
		{
			salida >> edad >> profesion; // empleados lectura
			cout << "2. salida: " << nombre << edad << profesion << endl;

			if (strcmp(aux, nombre) == 0) // si coincide regresa null
			{
				cout << "El registro se ha eliminado";
				//getch();
			}
			else
			{
				entrada << nombre << " " << edad << " " << profesion << endl; // Escribiendo
				cout << "3. Entrada: " << nombre << " " << edad << " " << profesion << endl;
			}
			salida >> nombre;// empleados lectura
			cout << "4. salida: " << nombre;
		}

		entrada.close();
		salida.close();
		remove("empleados.txt");
		rename("temp.txt", "empleados.txt");
	}
}