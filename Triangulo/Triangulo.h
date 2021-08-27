// Ejemploclase2.cpp : Defines the entry point for the console application.
//
#pragma once
class Triangulo
{
private: // atributos
	float base;
	float altura;
	float area;
public: //metodos
	Triangulo(void);
	Triangulo(float a, float b);
	float get_base();
	void set_base(float b);
	~Triangulo(void);
	float calcular_area(float a, float b);
};
