#include<iostream>
#include "stdlib.h"
#include "fstream" // trabajar con archivos
#include "string"

using namespace std;


void escribir();
void lectura();
void anadir();

int main() {
	//escribir();
	//lectura();
	//anadir();
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
		rename("temp.txt" , "empleados.txt");
	}

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