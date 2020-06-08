# include "nodo.h"

Nodo::Nodo () 
{
	cout << " Se construye el nodo " << endl;
	psig = 0;
}

// Constructor
Nodo::Nodo ( Dato & d ) 
{
	cout << " Se construye el nodo " << endl;
	cout << hex << ( void *) this << endl;
	dato.director = d.director;
	dato.pelicula = d.pelicula;
	dato.puntaje = d.puntaje;
	dato.recaudacion = d.recaudacion;
	psig = 0;
}


// Destructor
Nodo::~Nodo () 
{
	cout << " Se destruye el nodo ";
	cout << hex << ( void * ) this << endl ;
}


// Cambia el dato
void Nodo::asignarDato ( Dato d ) 
{
	dato.director = d.director;
	dato.pelicula = d.pelicula;
	dato.puntaje = d.puntaje;
	dato.recaudacion = d.recaudacion;
}

// Obtiene el dato
Dato Nodo::obtenerDato () 
{
	return dato;
}

// cambia el puntero
void Nodo::asignarSiguiente ( Nodo * ps ) 
{
	psig = ps ;
}

// obtiene el puntero
Nodo * Nodo::obtenerSiguiente () 
{
	return psig ;
}
