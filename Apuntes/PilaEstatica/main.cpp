// Ejemplo de uso de la clase ListaEstatica
#include <iostream>
#include "pila.h"

using namespace std ;

int main ()
{
	Pila pila ;
	pila.agregar('A');
	pila.agregar('H');
	pila.agregar('E');
	// Muestra los elementos
	while ( pila.obtenerTope() > 0) 
	{
		cout << pila.sacar() << endl ;
	}
	return 0;
}
