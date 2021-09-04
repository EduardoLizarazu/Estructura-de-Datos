#include "MyForm.h"
using namespace Formulario1;

int main() 
{
	// Instancia de mi clase referenciada
	//MyForm^ frm = gcnew MyForm();

	// va a ser la representacion de la aplicacion y le digo que lo ejecute
	// puedo saltarme la instancia y ponerlo directamente
	Application::Run(gcnew MyForm);
	return 0;
}