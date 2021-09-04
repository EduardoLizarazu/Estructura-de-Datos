#pragma once
class Area
{
private:
	float l;
public:
	Area();
	~Area();
	void set_lado(float _l);
	float get_lado();
	float calcularArea();
};

