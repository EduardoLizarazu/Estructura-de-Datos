#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "PILA.h"
#include "PILA1.h"
using namespace std;
using namespace msclr::interop;
	using namespace System::Windows::Forms;
class OPERACIONES:public PILA, public PILA1
{

public:
	OPERACIONES(void);
	void Guardar_grilla_pila(DataGridView^  grilla_pila);
	void Guardar_pila_grilla(DataGridView^  grilla_pila);
	void Guardar_pila1_grilla(DataGridView^  grilla_pila,PILA1 nueva_pila);
	void Eliminar_pila(DataGridView^  grilla_pila);
	void Eliminar_uno_a_uno(TextBox^ valor,DataGridView^  grilla_pila);
	void Eliminar_uno_a_uno1(TextBox^ valor,DataGridView^  grilla_pila);
	void Ordenar_pila();
	void Eliminar_repetidos();
	void Eliminar_triplicados();
	PILA1 Contar_repetidos();
};

