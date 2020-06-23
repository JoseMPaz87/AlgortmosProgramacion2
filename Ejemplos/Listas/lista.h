#ifndef _LISTA_H_
#define _LISTA_H_
#include "nodo.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctype.h>

using namespace std;

class Lista
{
	private :
	// Primer elemento de la lista
	Nodo * primer_nodo ;
	// Tamaño de la lista
	unsigned tam ;
	
	public :
	// Constructor
	// PRE : ninguna
	// POST : construye una lista vacia
	// - primero apunta a NULO
	// - tam = NULO
	Lista ();
	// Destructor
	// PRE : lista creada
	// POST : Libera todos los recursos de la lista
	~Lista ();
	// La lista es vacía ?
	// PRE : lista creada
	// POST : devuelve verdadero si la lista es vacia
	// falso de lo contrario
	//void cargar (string nombre_archivo);
	bool lista_vacia ();
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
	Dato obtener_dato ( unsigned pos );
	// Borrado del nodo que está en la posición pos
	// PRE : - lista creada y no vacia
	// - 0 < pos <= tam
	// POST : libera el nodo que esta en la posición pos
	// se toma 1 como el primero
	void eliminar_dato ( unsigned pos );
	// Obtener el tamaño de la lista
	// PRE : Lista creada
	// POST : Devuelve tam ( cantidad de nodos de la lista )
	unsigned obtener_tam ();
	private :
	// Obtiene un puntero al nodo de la posicion pos
	// PRE : 0 < pos <= tam
	// POST : devuelve un puntero al nodo solicitado
	Nodo * obtener_nodo ( unsigned pos );
};
#endif // _LISTA_H_
