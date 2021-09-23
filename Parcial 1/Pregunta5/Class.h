#pragma once
class Class
{
private:
	int n_reg;
	int n;
public:
	Class();
	~Class();
	void set_registro(int _n_reg);
	int get_registro();
	void set_n(int _n);
	int get_n();
	void leerVec(int V[]);
	void ImprimaVec(int V[]);
};

