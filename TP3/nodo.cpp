#include "nodo.h"

Nodo::Nodo ()
{
	dato = NULL;
	siguiente = NULL;
}

Dato * Nodo::obtener_dato () 
{
	return dato;
}

void Nodo::establecer_dato (Dato * d)
{
	dato = d;
}

Nodo * Nodo::obtener_siguiente () 
{
	return siguiente;
}

void Nodo::establecer_siguiente (Nodo * sig)
{
	siguiente = sig;
}


