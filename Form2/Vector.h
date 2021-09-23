#pragma once
#define MAX 10
class Vector
{
private:
	int vec[MAX];
	int tamano;
public:
	Vector();
	~Vector();
	int Get_tamano();
	void Set_tamano(int tam);

	int Get_vector(int posicion);
	void Set_vector(int posicion, int _elemento);
	void Incrementar();
	void Decrementar();
	bool Vacio_vector();
	bool Lleno_vector();
	bool Insertar(int _elemento, int posicion);
	bool Eliminar(int _elemento);
	bool Buscar(int elem, int &posicion);

	void ordenarVector(int vec[], int tam);
};

