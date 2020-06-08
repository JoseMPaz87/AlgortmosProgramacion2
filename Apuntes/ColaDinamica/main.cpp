// Uso estructura Cola
#include "cola.h"

using namespace std;
int main ()
{
	Cola c;
	
	c.insertar (1);
	c.insertar (2);
	c.insertar (3);
	
	while (! c.colaVacia ()) 
	{
		cout << c.obtenerDato () << endl ;
		c.sacarDato ();
	}

	return 0;
}
