#pragma once
#include "Persona.h"
class Empleado : public Persona
{
public:
	string empresa;
	int a�osTrabajado;
public:
	Empleado(string, int, string, int);
	~Empleado();
	void mostrarEmpleado();
};

