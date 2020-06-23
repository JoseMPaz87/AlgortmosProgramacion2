#include "lista.h"

// Constructor
Lista::Lista () 
{
	primer_nodo = NULO;
	tam = NULO;
}

// Destructor
Lista::~ Lista () 
{
	while (!( lista_vacia ()))
		eliminar_dato (1);
}
/*
void Lista::cargar (string nombre_archivo)
{
	ifstream entrada (nombre_archivo.c_str());
	string cadena, rectangulo = "R", triangulo = "T", circulo = "C";
	double radio, base, altura;
	
	if (entrada.fail())
	{
		cout << "Error al abrir el archivo " << nombre_archivo << endl;
		return;
	}
	while (entrada >> cadena)
	{
		if (cadena == circulo)
		{
			entrada >> cadena;
			radio = strtod (cadena.c_str(),NULL);
			//Dato dato = new Circulo(radio,circulo);
			//insertar (dato,tam + 1);
			cout << radio << endl;
		}
		else
		{
			if (cadena == rectangulo)
			{
				entrada >> cadena;
				base = strtod (cadena.c_str(),NULL);
				entrada >> cadena;
				altura = strtod (cadena.c_str(),NULL);
				//Dato dato = new Rectangulo(base,altura,rectangulo);
				//insertar (dato,tam + 1);
				cout << base << altura << endl;
			}
			else
			{
				if (cadena == triangulo)
				{
					entrada >> cadena;
					base = strtod (cadena.c_str(),NULL);
					entrada >> cadena;
					altura = strtod (cadena.c_str(),NULL);
					//Dato dato = new Triangulo(base,altura,triangulo);
					//insertar (dato,tam + 1);
					cout << base << altura << endl;
				}
				else
					break;
			{
		}
	}
	entrada.close();
}*/
// Lista vacia_
bool Lista::lista_vacia () 
{
	return ( primer_nodo == NULO );
}

// Agrega un dato al final
void Lista::insertar ( Dato d , unsigned pos ) 
{
	Nodo * nuevo_nodo = new Nodo ( d );

	if ( pos == 1) 
	{
		nuevo_nodo->establecer_siguiente ( primer_nodo );
		primer_nodo = nuevo_nodo ;
	}
	else 
	{
		Nodo * anterior_nodo = obtener_nodo ( pos - 1);
		nuevo_nodo->establecer_siguiente ( anterior_nodo->obtener_siguiente ());
		anterior_nodo->establecer_siguiente ( nuevo_nodo );
	}
	tam ++;
}
// obtiene el dato que esta en pos
Dato Lista::obtener_dato ( unsigned pos ) 
{
	Nodo * aux_nodo = obtener_nodo ( pos );
	return aux_nodo->obtener_dato ();
}

// Elimina el dato que esta en pos
void Lista::eliminar_dato ( unsigned pos ) 
{
	Nodo * borrar_nodo = primer_nodo ;
	
	if ( pos == 1) 
		primer_nodo = borrar_nodo->obtener_siguiente ();
	else 
	{
		Nodo * anterior_nodo = obtener_nodo ( pos - 1);
		borrar_nodo = anterior_nodo->obtener_siguiente ();
		anterior_nodo->establecer_siguiente ( borrar_nodo->obtener_siguiente ());
	}
	
	delete borrar_nodo ;
	tam--;
}

// devuelve el tamanio
unsigned Lista::obtener_tam () 
{
	return tam ;
}

// Devuelve un puntero al nodo que esta en pos
Nodo * Lista::obtener_nodo ( unsigned pos ) 
{
	Nodo * aux_nodo = primer_nodo ;

	for (unsigned i = 1; i < pos; i++) 
		aux_nodo = aux_nodo->obtener_siguiente ();
	
	return aux_nodo ;
}

