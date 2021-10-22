#include "StdAfx.h"
#include "OPERACIONES.h"


OPERACIONES::OPERACIONES(void)
{
  PILA();
}
void OPERACIONES::Guardar_grilla_pila(DataGridView^  grilla_pila)
{
  int i=0;
  while(i<grilla_pila->RowCount-1)
  {
    
	  PILA::Insertar(marshal_as<std::string>(System::Convert::ToString(grilla_pila->Rows[i]->Cells[0]->Value)));
   i++;
  }
}
void OPERACIONES::Guardar_pila_grilla(DataGridView^  grilla_pila)
{
  if(PILA::Pila_vacia()==false)
  {
	grilla_pila->ColumnCount=1;
	grilla_pila->RowCount=PILA::Get_tope()+1;
	string ele;
	int i=0;
	PILA aux;
	while(PILA::Pila_vacia()==false)
	{
		PILA::Eliminar(ele);
		aux.Insertar(ele);
		grilla_pila->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(ele);
		i++;
	}
	while(aux.Pila_vacia()==false)
	{
		aux.Eliminar(ele);
		PILA::Insertar(ele);
	}
  }
  else {MessageBox::Show("Pila vacia","Eliminar");}
}
void OPERACIONES::Eliminar_pila(DataGridView^  grilla_pila)
{
	string ele;
	int i=0;
	while(PILA::Pila_vacia()==false)
	{
	 PILA::Eliminar(ele);
	 grilla_pila->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(ele);
	 i++;
	}
}
void OPERACIONES::Eliminar_uno_a_uno(TextBox^ valor, DataGridView^  grilla_pila )
{

	string dato=marshal_as<std::string>(System::Convert::ToString(valor->Text));

	string ele;
	
	PILA aux;

	PILA::Eliminar(ele);

	while((PILA::Pila_vacia()==false) && (dato!=ele))
	{
	  aux.Insertar(ele);

	  PILA::Eliminar(ele);
	  
	}
	if(dato==ele) { 
		             grilla_pila->Rows[0]->Cells[0]->Value=marshal_as<System::String^>(ele); 
					 while(aux.Pila_vacia()==false)
						{
							aux.Eliminar(ele);
							PILA::Insertar(ele);
						}
	              }
	
	else
	{   MessageBox::Show("hola",marshal_as<System::String^>(ele));
		while(aux.Pila_vacia()==false)
		{
		aux.Eliminar(ele);
		PILA::Insertar(ele);
		
	    }
	}
}

void OPERACIONES::Eliminar_uno_a_uno1(TextBox^ valor, DataGridView^  grilla_pila )
{

	string dato=marshal_as<std::string>(System::Convert::ToString(valor->Text));

	string ele;
	
	PILA aux;

	while(PILA::Pila_vacia()==false)
	{
	  PILA::Eliminar(ele);
	  if(dato!=ele) { aux.Insertar(ele);grilla_pila->Rows[0]->Cells[0]->Value=marshal_as<System::String^>(ele); }
	}
	  
	  while(aux.Pila_vacia()==false)
		{
		aux.Eliminar(ele);
		PILA::Insertar(ele);
		
	    }
}

void OPERACIONES::Ordenar_pila()
{
	PILA aux,aux2,aux1;
	aux=PILA::This_pila();
	string ele1,ele2,ele3;
	while(aux.Pila_vacia()==false)
	{
        aux.Eliminar(ele1);
	    while(aux.Pila_vacia()==false)
	    {
	   
	       aux.Eliminar(ele2);
	       if(ele1>ele2) { 
		                   aux1.Insertar(ele1);
						   ele3=ele1; 
						   ele1=ele2; 
						   ele2=ele3; 
		                  }
		   else { aux1.Insertar(ele2);
		        }
	}
	while(aux1.Pila_vacia()==false)
	{
		aux1.Eliminar(ele3);
		aux.Insertar(ele3);
	}
	aux2.Insertar(ele1);
	}
	PILA::This_pila(aux2);
}

void OPERACIONES::Eliminar_repetidos()
{
	PILA aux,aux2,aux1;
	aux=PILA::This_pila();
	string ele1,ele2,ele3;
	while(aux.Pila_vacia()==false)
	{
        aux.Eliminar(ele1);
	    while(aux.Pila_vacia()==false)
	    {
	   
	       aux.Eliminar(ele2);
	       if(ele1!=ele2)  { 
		                    aux1.Insertar(ele2);
					
		                  }
	    }
		while(aux1.Pila_vacia()==false)
		{
			aux1.Eliminar(ele3);
			aux.Insertar(ele3);
		}
		aux2.Insertar(ele1);
	}

	PILA::This_pila(aux2);

}
void OPERACIONES::Eliminar_triplicados()
{
	PILA aux,aux2,aux1;
	aux=PILA::This_pila();// pila orginal se guarda.
	string ele1,ele2,ele3;
	int contador;
	while(aux.Pila_vacia()==false)
	{
        aux.Eliminar(ele1);
		contador=0;
	    while(aux.Pila_vacia()==false)
	    {
	       aux.Eliminar(ele2);
	       if (ele1!=ele2)  { 
		                       aux1.Insertar(ele2);
					
		                      }
		   else if ((ele1==ele2) && (contador<1)) { aux1.Insertar(ele2); contador++;}
	    }
		while(aux1.Pila_vacia()==false)
		{
			aux1.Eliminar(ele3);
			aux.Insertar(ele3);
		}
		aux2.Insertar(ele1);
	}

	PILA::This_pila(aux2);

}
PILA1 OPERACIONES::Contar_repetidos()
{
    PILA aux,aux2,aux1,aux3;
	PILA1 final;
	aux=PILA::This_pila();
	string ele1,ele2,ele3;
	NODO ele4;
	int contador;
	while(aux.Pila_vacia()==false)
	{
        aux.Eliminar(ele1);
		contador=1;
	    while(aux.Pila_vacia()==false)
	    {
	   
	       aux.Eliminar(ele2);
	       if(ele1!=ele2)  { 
		                    aux1.Insertar(ele2);
					
		                  }
		   else 
		   {
			   if(ele1==ele2) {contador++;}
		   
		   }
	    }
		while(aux1.Pila_vacia()==false)
		{
			aux1.Eliminar(ele3);
			aux.Insertar(ele3);
		}
		ele4.Set_dato(ele1);
		ele4.Set_numero(contador);
		final.Insertar(ele4);
		aux2.Insertar(ele1);
	}

	PILA::This_pila(aux2);
	return final;
}
void OPERACIONES::Guardar_pila1_grilla(DataGridView^  grilla_pila, PILA1 nueva_pila)
{
  if(nueva_pila.Pila_vacia()==false)
  {
	grilla_pila->ColumnCount=2;
	grilla_pila->RowCount=nueva_pila.Get_tope()+1;
	NODO ele;
	int i=0;
	PILA1 aux;
	while(nueva_pila.Pila_vacia()==false)
	{
		nueva_pila.Eliminar(ele);
		aux.Insertar(ele);
		grilla_pila->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(ele.Get_dato());
		grilla_pila->Rows[i]->Cells[1]->Value=System::Convert::ToString(ele.Get_numero());
		i++;
	}
	while(aux.Pila_vacia()==false)
	{
		aux.Eliminar(ele);
		nueva_pila.Insertar(ele);
	}
  }
  else {MessageBox::Show("Pila vacia","Eliminar");}
}