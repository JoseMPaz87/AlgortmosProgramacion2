// Ejemplo de uso de la lista
#include "lista.h"

using namespace std ;

int main ()
{
	Lista lista ;
	
	lista.insertar ( 'A' , 1);
	lista.insertar ( 'C' , 2);
	lista.insertar ( 'F' , 1);
	lista.insertar ( 'H' , 2);
	
	for ( unsigned i = 1; i <= lista.obtenerTam (); i ++ ) 
		cout << lista.obtenerDato ( i ) << endl ;
	
	// Se borra el segundo nodo
	lista.eliminarDato (2);
	for ( unsigned i = 1; i <= lista.obtenerTam (); i ++ ) 
		cout << lista.obtenerDato ( i ) << endl ;
	
	return 0;
}
