
#include "Triangulo.h"


Triangulo::Triangulo(void)
{

}

Triangulo::Triangulo(float a, float b)
{
	base=a;
	altura=b;
}

Triangulo::~Triangulo(void)
{
}

float Triangulo::get_base(){
    return base;
}

void Triangulo::set_base(float b){
	base=b;
}

float Triangulo::calcular_area(float a, float b)
{
	area=(a*b)/2;
	area=(a*base)/2;
	return area;
}