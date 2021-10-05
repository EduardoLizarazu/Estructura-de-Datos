#include "Estudiante.h"

Estudiante::Estudiante(string _nombre, int _edad, int _registro) : Persona(_nombre, _edad) {
	registro = _registro;
}
Estudiante::~Estudiante(){}

void Estudiante::mostrarEstudiante() {
	mostrarPersona();
	cout << "Registro: " << registro << endl;
}
