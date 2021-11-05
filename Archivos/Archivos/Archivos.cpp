// Autor: Eduardo Lizarazu.

// Archivos.cpp : main project file.

#include "stdafx.h"

#include "StdAfx.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include "ABMamigo.cpp"

using namespace std;


void main() {
	int op;
	bool salir;
	

	ABMamigo *amig = new ABMamigo("amigOO.dat");

	salir = true;
	while (salir)
	{
		cout << "\n1. Adicionar nuevo" << endl;
		cout << "2. Listar" << endl;
		cout << "3. Buscar registro" << endl;
		cout << "4. Eliminar registro" << endl;
		cout << "5. Modificar registro" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			salir = false;
			break;
		case 1:
			amig->adicionarNuevo();
			cout << "Elementos agregados ..." << endl;
			break;
		case 2:
			amig->listar();
			break;
		case 3:
			amig->buscarReg();
			break;
		case 4:
			amig->eliminarReg();
			break;
		case 5:
			amig->modificarReg();
			break;
		default:
			cout << "No ingreso ningua de las opciones" << endl;
		}
	}
	
	//amig->listar();
	cout << "Fin del programa" << endl; 
	getch();
}

