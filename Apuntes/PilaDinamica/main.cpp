// Uso estructura Pila
#include "pila.h"
using namespace std ;

int main ()
{
	Pila p ;
	p.agregar ('A');
	p.agregar ('H');
	p.agregar ('B');
	
	while ( !p.pilaVacia () ) 
	{
		cout << p.sacar () << endl ;
	}
	return 0;
}
