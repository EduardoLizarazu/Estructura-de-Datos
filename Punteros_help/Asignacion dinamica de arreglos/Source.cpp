#include<iostream>
#include "stdlib.h" // Funciona new y delete

using namespace std;

/* ASIGNACINO DINAMICA DE ARREGLOS
* 
* Vamos a usar el espacio necesario para los arreglos
* 
* new: Reserva el numero de bytes solicitado por la declaracion.
*	para no desperdiciar memoria.
* 
* delete: Libera un bucle de bytes reservado con anterioridad.
*	liberamos memoria reservada con el new
* 
* Ejemplo: Pedir al usuario n calificaciones y almacenarlos 
	en un arreglo dinamico
* 
*/

void pedirNotas();
void mostrarNotas();

// Como vamos a usar una funcion externa, voy poner una variable global 
// y mi puntero
int numCalif, *dir_numCalif;

int main() {
	pedirNotas();
	mostrarNotas();

	// Liberando el espacio usado
	// Se le poner [] porque estamos hablando de un arreglo
	delete[] dir_numCalif; 

	system("pause");
	return 0;
}

void pedirNotas() {
	cout << "Digite el numero de calificaciones: ";
	cin >> numCalif;

	// Reservamos memoria y creamos el arreglo dinamico
	// Si el usuario dice 10, en total estariamos reservando 40 byetes;
	// ya que el espacio por elemento es de 4 bytes
	dir_numCalif = new int[numCalif];

	for (int i = 0; i < numCalif; i++)
	{
		cout << "Ingrese una nota: ";
		cin >> dir_numCalif[i]; // Llenado de arreglo
	}
}

void mostrarNotas() {
	cout << "\n\nMostrar notas del usuario:\n";
	for (int i = 0; i < numCalif; i++)
	{
		cout << dir_numCalif[i] << endl;
	}
}