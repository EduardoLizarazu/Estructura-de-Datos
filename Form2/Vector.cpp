#include "Vector.h"
#include <iostream>
#define MAX 10

using namespace std;

Vector::Vector(void)
{
	vec[MAX] = 0;
	tamano = 0;
}


Vector::~Vector(void)
{
}

int Vector::Get_tamano()
{
	return tamano;
}

void Vector::Set_tamano(int tam)
{
	tamano = tam;
}

int Vector::Get_vector(int posicion)
{
	return vec[posicion];
}

void Vector::Set_vector(int posicion, int _elemento)
{
	vec[posicion] = _elemento;
}

void Vector::Incrementar()
{
	tamano++;
}

void Vector::Decrementar()
{
	tamano--;
}

bool Vector::Vacio_vector()
{
	if (tamano == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vector::Lleno_vector()
{
	if (tamano == (MAX - 1))
	{
		return true;
	}

	else { return false; }
}

bool Vector::Insertar(int _elemento, int posicion)
{
	if ((posicion < 0) && (posicion > tamano))
	{
		return false;
	}
	else
	{
		if (Lleno_vector() == true)
		{
			return false;
		}
		else
		{
			int i = Get_tamano();
			while (i > posicion)
			{
				vec[i] = vec[i - 1];
				i--;
			}
			vec[posicion] = _elemento;
			//Incrementar();
			return true;
		}
	}
}

bool Vector::Eliminar(int _elemento)
{
	int pos = 0, i = 0;
	if (Vacio_vector() == true)
	{
		return false;
	}
	else
	{
		if (Buscar(_elemento, pos))
		{
			i = pos;
			while (i < Get_tamano())
			{
				vec[i] = vec[i + 1];
				i++;
			}
			Decrementar();
			return true;
		}
	}
}

bool Vector::Buscar(int elem, int& posicion)
{
	for (int i = 0; i < tamano; i++) {
		if (elem == vec[i])
		{
			posicion = i;
			return true;
		}
	}
	return false;
}



void Vector::ordenarVector(int vec[], int n) {
	int aux;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i; j < n; j++) {
			if (vec[i] > vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
