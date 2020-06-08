# ifndef _COLA_H_
# define _COLA_H_
# include "nodo.h"

class Cola
{
	private :
	// Primer elemento de la cola
	Nodo * primero ;
	// Ultimo elemento de la cola
	Nodo * ultimo ;

	public :
	// Constructor
	// PRE : ninguna
	// POST : construye una cola vacía
	// - primero y ultimo apuntan a nulo
	Cola ();
	// Destructor
	// PRE : cola creada
	// POST : Libera todos los recursos de la cola
	~Cola ();
	// ¿La cola es vacía ?
	// PRE : cola creada
	// POST : devuelve verdadero si la cola es vacía
	// falso de lo contrario
	bool colaVacia ();
	// Agregar un elemento a la cola
	// PRE : cola creada
	// POST : agrega un dato ( dentro de un nodo ) al final
	void insertar ( Dato d );
	// Obtener el dato que está al principio
	// PRE : - cola creada y no vacía
	// POST : devuelve el dato que está al principio
	Dato obtenerDato ();
	// Borrado del nodo que está al principio
	// PRE : - cola creada y no vacía
	// POST : libera el nodo que está al principio
	void sacarDato ();
};
# endif // _COLA_H_
