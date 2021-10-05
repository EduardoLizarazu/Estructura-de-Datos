#include "Empleado.h"

Empleado::Empleado(string _nombre, int _edad, string _empresa, int _aņosTrabajado) : Persona(_nombre,_edad) {
	empresa = _empresa;
	aņosTrabajado = _aņosTrabajado;
}

Empleado::~Empleado(){}

void Empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "Nombre de la empresa: " << empresa << endl;
	cout << "Aņos trabajado: " << aņosTrabajado << endl;
}