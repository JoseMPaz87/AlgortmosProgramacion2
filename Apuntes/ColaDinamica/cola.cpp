#include "cola.h"

// Constructor
Cola::Cola () 
{
	primero = ultimo = 0;
}

// Destructor
Cola::~Cola () 
{
	while (!( colaVacia ()))
		sacarDato ();
}

// Cola vacia ?
bool Cola::colaVacia () 
{
	return ( primero == 0);
}

// Agrega un dato
void Cola::insertar ( Dato d ) 
{
	Nodo * pnodo = new Nodo ( d );
	if ( this->colaVacia ()) 
	{
		primero = pnodo ;
	}
	else
		ultimo->asignarSiguiente ( pnodo );
	ultimo = pnodo ;
}

// Obtener el dato
Dato Cola::obtenerDato () 
{
	return primero->obtenerDato ();
}

// Sacar un dato
void Cola::sacarDato () 
{
	if ( primero == ultimo )
		ultimo = 0;
	Nodo * paux = primero ;
	primero = paux->obtenerSiguiente ();
	delete paux ;
}
