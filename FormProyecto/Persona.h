#pragma once
#include <string>
#include <iostream>
using namespace std;
class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona(string, int);
	~Persona();
	void mostrarPersona();
	void set_nombre(string);
	string get_nombre();
	void set_edad(int);
	int get_edad();
};

