#include <iostream>
#include "tipos.h"
#include "ahorcado.h"
#include "validacion.h"

using namespace std;

static const char * errores	[] = 
{
	NULL, 
	"Error se espera 2 argumentos", 
	"Error la longitud de la palabra a adivinar debe tener al menos 3 letras"
};

int main (int argc, const char * argv[])
{
	estado_t estado;	
	
	if ((estado = validar_entrada (argc, argv)) != BIEN)
	{
		cerr << errores[estado] << endl;
		return 1;
	}
	
	return 0;
}
