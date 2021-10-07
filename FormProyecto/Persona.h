#pragma once
#include "string"
using namespace std;
class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona(string, int);
	string get_nombre();
	void set_nombre(string nom);
	int get_edad();
	void set_edad(int tam);
	void mostrarPersona();
};
