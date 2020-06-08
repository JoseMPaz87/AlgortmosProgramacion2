#ifndef _LISTA_H_
#define _LISTA_H_
#include "nodo.h"

class Lista
{
	private :
	// Primer elemento de la lista
	Nodo * primero ;
	// Tamaño de la lista
	unsigned tam ;
	public :
	// Constructor
	// PRE : ninguna
	// POST : construye una lista vacia
	// - primero apunta a nulo
	// - tam = 0
	Lista ();
	// Destructor
	// PRE : lista creada
	// POST : Libera todos los recursos de la lista
	~Lista ();
	// La lista es vacía ?
	// PRE : lista creada
	// POST : devuelve verdadero si la lista es vacia
	// falso de lo contrario
	bool listaVacia ();
	// Agregar un elemento a la lista
	// PRE : lista creada
	// POST : agrega un dato en la posicion pos
	// incrementa tam en 1
	void insertar ( Dato d , unsigned pos );
	// Obtener el dato que está en la posición pos
	// PRE : - lista creada y no vacia
	// - 0 < pos <= tam
	// POST : devuelve el dato que esta en la posicion pos
	// se toma 1 como el primero
	Dato obtenerDato ( unsigned pos );
	// Borrado del nodo que está en la posición pos
	// PRE : - lista creada y no vacia
	// - 0 < pos <= tam
	// POST : libera el nodo que esta en la posición pos
	// se toma 1 como el primero
	void eliminarDato ( unsigned pos );
	// Obtener el tamaño de la lista
	// PRE : Lista creada
	// POST : Devuelve tam ( cantidad de nodos de la lista )
	unsigned obtenerTam ();
	private :
	// Obtiene un puntero al nodo de la posicion pos
	// PRE : 0 < pos <= tam
	// POST : devuelve un puntero al nodo solicitado
	Nodo * obtenerNodo ( unsigned pos );
};
#endif // _LISTA_H_
