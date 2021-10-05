#include "Empleado.h"

Empleado::Empleado(string _nombre, int _edad, string _empresa, int _a�osTrabajado) : Persona(_nombre,_edad) {
	empresa = _empresa;
	a�osTrabajado = _a�osTrabajado;
}

Empleado::~Empleado(){}

void Empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "Nombre de la empresa: " << empresa << endl;
	cout << "A�os trabajado: " << a�osTrabajado << endl;
}