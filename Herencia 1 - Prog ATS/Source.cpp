#include<iostream>
#include "stdlib.h"
#include "Persona.h"
#include "Empleado.h"
#include "Estudiante.h"
#include "Universitario.h"
using namespace std;

int main() {
	// CLASE PERSONA
	Persona persona1("Eduardo", 20);
	persona1.mostrarPersona();

	// CLASE EMPLEADO
	Empleado empleado1("Moara", 28, "Mainter", 8);
	empleado1.mostrarEmpleado();

	// CLASE ESTUDIANTE
	Estudiante estudiante1("Jose", 18, 2020210401);
	estudiante1.mostrarEstudiante();

	// CLASE UNIVERSITARIO
	Universitario universitario1("Eduardo", 20, 2020210401, "UPSA", 3);
	universitario1.mostrarUniversitario();

	system("pause");
	return 0;
}
