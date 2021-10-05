#pragma once
#include <string.h>
#include <string>
#include <stdlib.h>
#include<iostream>
using namespace std;
class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona(string _nombre, int _edad);
	~Persona();
	void mostrarPersona();
};

