#include "Persona.h"

#include "Persona.h"
#include "string"
using namespace std;

Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}
string Persona::get_nombre() {
	return nombre;
}
void Persona::set_nombre(string nom) {
	nombre = nom;
}
int Persona::get_edad() {
	return edad;
}
void Persona::set_edad(int tam) {
	edad = tam;
}