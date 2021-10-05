#include "Empleado.h"

Empleado::Empleado(string _nombre, int _edad, string _empresa, int _añosTrabajado) : Persona(_nombre,_edad) {
	empresa = _empresa;
	añosTrabajado = _añosTrabajado;
}

Empleado::~Empleado(){}

void Empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "Nombre de la empresa: " << empresa << endl;
	cout << "Años trabajado: " << añosTrabajado << endl;
}