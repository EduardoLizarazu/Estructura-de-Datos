#include "Area.h"
#include "iostream"
using namespace std;

Area::Area() {

}
Area::~Area(){}
void Area::set_lado(float _l) {
	l = _l;
}
float Area::get_lado() {
	return l;
}
float Area::calcularArea() {
	float res;
	res = l * l;
	return res;
}
