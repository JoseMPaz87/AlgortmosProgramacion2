#include "pila.h"

// Constructor
Pila::Pila () 
{
	ultimo = 0;
}

// Destructor
Pila::~Pila () 
{
	while ( !(pilaVacia ()) )
		sacar ();
}

// Pila vacia ?
bool Pila::pilaVacia () 
{
	return ( ultimo == 0);
}

// Agregar dato
void Pila::agregar ( Dato d ) 
{
	Nodo * pnodo = new Nodo ( d );
	pnodo->asignarSiguiente ( ultimo );
	ultimo = pnodo ;
}

// Obtener el dato
Dato Pila::obtenerDato () 
{
	return ultimo->obtenerDato ();
}

// Sacar dato
Dato Pila::sacar () 
{
	Nodo * paux = ultimo ;
	ultimo = paux->obtenerSiguiente ();
	Dato d = paux->obtenerDato ();
	delete paux ;
	return d ;
}
