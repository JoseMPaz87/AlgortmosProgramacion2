#ifndef _PILA_H_
#define _PILA_H_

#include "nodo.h"

class Pila
{
	private :
	// Primer elemento de la pila
	Nodo * ultimo ;
	
	public :
	// Constructor
	// PRE : ninguna
	// POST : construye una pila vacía
	// - primero apunta a nulo
	Pila ();
	// Destructor
	// PRE : pila creada
	// POST : Libera todos los recursos de la pila
	~Pila ();
	// ¿La pila es vacía ?
	// PRE : pila creada
	// POST : devuelve verdadero si la pila es vacía
	// falso de lo contrario
	bool pilaVacia ();
	// Agregar un elemento a la pila
	// PRE : pila creada
	// POST : agrega un dato ( dentro de un nodo ) al principio
	void agregar ( Dato d );
	// Obtener el dato que está en la cima
	// PRE : - pila creada y no vacía
	// POST : devuelve el dato que está en la cima
	Dato obtenerDato ();
	// Borrado del nodo que está en la cima
	// PRE : - pila creada y no vacía
	// POST : libera el nodo que está en la cima
	Dato sacar ();
	};
#endif // _PILA_H_
