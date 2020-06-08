// Implementacion clase ListaEstatica
#include "pila.h"

// Constructor
Pila::Pila () 
{
	tope = 0;
}

// Destructor
Pila::~Pila () 
{
}

// agregar un dato
void Pila::agregar (Dato d) 
{
	if (!(this->pilaLlena()))
		pila[tope ++] = d;
}

// listaVacia
bool Pila::pilaVacia () 
{
	return ( tope == 0);
}

// PilaLlena
bool Pila::pilaLlena () 
{
	return ( tope == MAXIMO );
}

// obtener un dato
Dato Pila::obtener ( ) 
{
	return pila[tope - 1];
}

// sacar el dato que esta encima
Dato Pila::sacar ( ) 
{
	tope--;
	return pila[tope];
}

// obtener el tope o maximo logico
unsigned Pila::obtenerTope () 
{
	return tope ;
}
