#include "validacion.h"

estado_t validar_entrada (int argc, char * argv[])
{	
	char * c;
	long int n;
	
	if (argc != 3)
		return CANTIDAD_ARGUMENTOS;
	
	if (strlen (argv[1]) < 3)
		return LONGITUD_PALABRA;
	
	if ((n = strtol (argv[2], &c, 10)) < 3)
		return CANTIDAD_INTENTOS;
	
	if (*c && *c != '\n')
		return INGRESO_UNA_LETRA;
		
	if (n < 0)
		return NUMERO_NEGATIVO;
		
	return BIEN;
}
