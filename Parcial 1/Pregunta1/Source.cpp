#include<iostream>
#include "stdlib.h"
#include "Class.h"

using namespace std;

int main() {
	int v[] = { 2,0,2,0,2,1,0,4,0,1 };
	int n;
	Class registro;
	
	registro.set_m(10);
	n = registro.get_m();
	cout << "El numero de registro es: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}

	system("pause");
	return 0;
}
