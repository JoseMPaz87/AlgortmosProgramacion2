#include "validacion.h"

estado_t validar_entrada (int argc, char * argv[])
{	
	char * c;
	long int n_intentos;
	
	if (argc != CANTIDAD_DE_ARGUMENTOS)
		return CANTIDAD_ARGUMENTOS;
	
	if (strlen (argv[POSICION_PALABRA]) < LARGO_MINIMA_PALABRA)
		return LONGITUD_PALABRA;
	
	if ((n_intentos = strtol (argv[POSICION_INTENTOS], &c, BASE_DECIMAL)) < CANTIDAD_MINIMA_INTENTOS)
		return ERROR_CANTIDAD_INTENTOS;
	
	if (*c && *c != SALTO_DE_LINEA)
		return NO_INGRESO_UN_NUMERO;
		
	if (n_intentos < 0)
		return NUMERO_NEGATIVO;
		
	return BIEN;
}
