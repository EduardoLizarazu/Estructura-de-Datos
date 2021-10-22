#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace msclr::interop;
class NODO
{

//Tipo de dato publico
string dato;
int numero;
public:
	NODO(void){ numero=0;}
	string Get_dato(){ return dato;}
	int Get_numero(){return numero;}
	void Set_dato(string dat ){dato=dat;}
	void Set_numero(int num){numero=num;}
};

