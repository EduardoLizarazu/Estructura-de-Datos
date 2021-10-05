#include "Universitario.h"

Universitario::Universitario(string _nombre, int _edad, int _registro, string _nombre_universidad, int _semestre) : Estudiante(_nombre, _edad, _registro) {
	nombre_universidad = _nombre_universidad;
	semestre = _semestre;
}

Universitario::~Universitario(){}

void Universitario::mostrarUniversitario() {
	mostrarEstudiante();
	cout << "Nombre Universidad: " << nombre_universidad << endl;
	cout << "Semetre: " << semestre << endl;
}