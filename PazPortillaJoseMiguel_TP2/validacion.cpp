#include "validacion.h"

estado_t validar_entrada (int argc, const char * argv[])
{	
	int longitud_palabra = 0;
	
	if (argc != 2)
		return CANTIDAD_ARGUMENTOS;
		
	while (argv[1][longitud_palabra] != '\0')
	{
		longitud_palabra++;	
	}
	
	if (longitud_palabra < 3)
		return LONGITUD_PALABRA;
		
	return BIEN;
}
