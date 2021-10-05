#pragma once
#include "Persona.h"
class Estudiante : public Persona
{
private:
	int registro;
public:
	Estudiante(string, int, int);
	~Estudiante();
	void mostrarEstudiante();
};

