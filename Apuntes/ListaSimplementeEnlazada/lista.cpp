#include "lista.h"

// Constructor
Lista::Lista () 
{
	primero = 0;
	tam = 0;
}

// Destructor
Lista::~ Lista () 
{
	while (!( listaVacia ()))
		eliminarDato (1);
}

// Lista vacia_
bool Lista::listaVacia () 
{
	return ( primero == 0);
}

// Agrega un dato al final
void Lista::insertar ( Dato d , unsigned pos ) 
{
	Nodo * nuevo = new Nodo ( d );

	if ( pos == 1) 
	{
		nuevo->asignarSiguiente ( primero );
		primero = nuevo ;
	}
	else 
	{
		Nodo * anterior = obtenerNodo ( pos - 1);
		nuevo->asignarSiguiente ( anterior->obtenerSiguiente ());
		anterior->asignarSiguiente ( nuevo );
	}
	tam ++;
}
// obtiene el dato que esta en pos
Dato Lista::obtenerDato ( unsigned pos ) 
{
	Nodo * paux = obtenerNodo ( pos );
	return paux->obtenerDato ();
}

// Elimina el dato que esta en pos
void Lista::eliminarDato ( unsigned pos ) 
{
	Nodo * borrar = primero ;
	
	if ( pos == 1) 
		primero = borrar->obtenerSiguiente ();
	else 
	{
		Nodo * anterior = obtenerNodo ( pos - 1);
		borrar = anterior->obtenerSiguiente ();
		anterior->asignarSiguiente ( borrar->obtenerSiguiente ());
	}
	delete borrar ;
	tam--;
}

// devuelve el tamanio
unsigned Lista::obtenerTam () 
{
	return tam ;
}

// Devuelve un puntero al nodo que esta en pos
Nodo * Lista::obtenerNodo ( unsigned pos ) 
{
	Nodo * aux = primero ;
	unsigned i = 1;

	while ( i < pos ) 
	{
		aux = aux->obtenerSiguiente ();
		i++;
	}

	return aux ;
}
