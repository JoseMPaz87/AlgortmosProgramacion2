#include "validacion.h"

estado_t validar_entrada (int argc, const char * argv[])
{	
	fstream nombre_archivo(argv[POS_NOMBRE_ARCHIVO]);
	
	if (argc != N_ARGUMENTOS)
		return ERROR_N_ARGUMENTOS;
	
	if (nombre_archivo.fail ())
		return ERROR_AL_ABRIR_ARCHIVO;
	
	nombre_archivo.close ();
		
	return BIEN;
}
