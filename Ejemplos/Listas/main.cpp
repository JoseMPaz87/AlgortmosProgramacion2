#include <iostream>
#include "lista.h"

using namespace std ;
int main ()
{
	Lista lista ;
	
	lista.insertar ( 'A' , 1);
	lista.insertar ( 'F' , 2);
	lista.insertar ( 'B' , 3);
	
	for ( unsigned i = 1; i <= lista.obtener_tam (); i++ ) 
		cout << lista.obtener_dato (i) << endl ;
	
	return 0;
}

// Se borra el segundo nodo
