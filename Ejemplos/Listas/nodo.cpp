#include "nodo.h"

// Constructor
Nodo::Nodo ( Dato d) 
{
	std::cout << " Se construye el nodo ";
	std::cout << std::hex << ( void * ) this << std::endl ;
	dato = d ;
	psig = NULO;
}

// Destructor
Nodo::~Nodo () 
{
	/*if (dato != NULO)
		delete dato;*/
	std::cout << " Se destruye el nodo ";
	std::cout << std::hex << ( void *) this << std::endl ;
}


// Establece el dato
void Nodo::establecer_dato ( Dato d ) 
{
	dato = d ;
}

// Obtiene el dato
Dato Nodo::obtener_dato () 
{
	return dato ;
}

// cambia el puntero
void Nodo::establecer_siguiente ( Nodo * ps ) 
{
	psig = ps ;
}

// obtiene el puntero
Nodo * Nodo::obtener_siguiente () 
{
	return psig ;
}
