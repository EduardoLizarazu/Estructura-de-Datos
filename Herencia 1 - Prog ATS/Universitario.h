#pragma once
#include "Estudiante.h"
class Universitario : public Estudiante
{
private:
	string nombre_universidad;
	int semestre;
public:
	Universitario(string, int, int, string, int);
	~Universitario();
	void mostrarUniversitario();
};

