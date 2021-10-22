#include "StdAfx.h"
#include "PILA.h"


PILA::PILA(void)
{
	tope=-1;
}
int PILA::Get_tope()
{
	return tope;
}
	bool PILA::Pila_vacia()
	{
	
		if(tope==-1) { return true;}
		else {return false;}
	}
	bool PILA::Pila_llena()
	{ if(tope==NP) { return true;}
	else return false;
	}
	bool PILA::Insertar(string elemento)
	{
		if(Pila_llena()==true) {return false;}
	
		else{ 
			tope++;
		     pila[tope]=elemento;
		 return true;
		}
	
	}
	bool PILA::Eliminar(string &elemento)
	{
		if(Pila_vacia()==true) { return false;}
		else {
		      elemento=pila[tope];
			  tope--;
			  return true;
		}
	}