#ifndef _NODO_H_
#define _NODO_H_

#include "tipos.h"

class Nodo
{

	private:
	Dato * dato;
	Nodo * siguiente;
	public:
	//PRE: Ninguno
	//POS: Construye el nodo con dato = NULL, siguiente = NULL
	Nodo ();
	//PRE: Ninguno
	//POS: Retorna * dato
	Dato * obtener_dato ();
	//PRE: Ninguno
	//POS: dato = d
	void establecer_dato (Dato * d);
	//PRE: Ninguno
	//POS: Retorna * siguiente
	Nodo * obtener_siguiente (); 
	//PRE: Ninguno
	//POS: siguiente = sig
	void establecer_siguiente (Nodo * sig);
};
#endif
